// $Id$

#include "Object.h"
#include "POA_Helper.h"
#include "Worker_Task.h"
#include "Properties.h"
#include "Builder.h"
#include "ThreadPool_Task.h"
#include "Reactive_Task.h"
#include "tao/debug.h"

#if ! defined (__ACE_INLINE__)
#include "Object.inl"
#endif /* __ACE_INLINE__ */

ACE_RCSID(RT_Notify, TAO_NS_Object, "$Id$")

TAO_NS_Object::TAO_NS_Object (void)
  :event_manager_ (0), admin_properties_ (0), id_ (0), poa_ (0), worker_task_ (0), own_worker_task_ (0), proxy_poa_ (0), own_proxy_poa_ (0), shutdown_ (0)
{
  if (TAO_debug_level > 1 )
    ACE_DEBUG ((LM_DEBUG,"object:%x  created\n", this ));
}

TAO_NS_Object::~TAO_NS_Object ()
{
  if (TAO_debug_level > 1 )
    ACE_DEBUG ((LM_DEBUG,"object:%x  destroyed\n", this ));
}

void
TAO_NS_Object::init (TAO_NS_POA_Helper* poa, TAO_NS_POA_Helper* proxy_poa, TAO_NS_Worker_Task* worker_task)
{
  poa_ = poa;
  proxy_poa_ = proxy_poa;
  worker_task_ = worker_task;
}

CORBA::Object_ptr
TAO_NS_Object::activate (ACE_ENV_SINGLE_ARG_DECL)
{
  return poa_->activate (this->servant (), id_ ACE_ENV_ARG_PARAMETER);
}

void
TAO_NS_Object::deactivate (ACE_ENV_SINGLE_ARG_DECL)
{
  poa_->deactivate (id_ ACE_ENV_ARG_PARAMETER);
}

int
TAO_NS_Object::shutdown (ACE_ENV_SINGLE_ARG_DECL)
{
  {
    ACE_GUARD_RETURN (TAO_SYNCH_MUTEX, ace_mon, this->lock_, 1);

    if (this->shutdown_ == 1)
      return 1; // Another thread has already run shutdown.

    this->shutdown_ = 1;
  }

  this->deactivate (ACE_ENV_SINGLE_ARG_PARAMETER);

  this->shutdown_worker_task ();
  this->shutdown_proxy_poa ();

  return 0;
}

CORBA::Object_ptr
TAO_NS_Object::ref (ACE_ENV_SINGLE_ARG_DECL)
{
  return poa_->id_to_reference (id_ ACE_ENV_ARG_PARAMETER);
}

void
TAO_NS_Object::shutdown_worker_task (void)
{
  // Only do this if we are the owner.
  if (own_worker_task_ == 1)
    {
      this->worker_task_->shutdown (); // the worker deletes itself when its <close> hook is eventually called.
    }
}

void
TAO_NS_Object::shutdown_proxy_poa (void)
{
  if (own_proxy_poa_ == 1)
    {
      ACE_DECLARE_NEW_CORBA_ENV;
      proxy_poa_->destroy (ACE_ENV_SINGLE_ARG_PARAMETER);
      delete proxy_poa_;
    }
}

void
TAO_NS_Object::worker_task_own (TAO_NS_Worker_Task* worker_task)
{
  this->worker_task (worker_task);

  // claim ownership.
  this->own_worker_task_ = 1;
}

void
TAO_NS_Object::worker_task (TAO_NS_Worker_Task* worker_task)
{
  // shutdown the current worker.
  this->shutdown_worker_task ();

  this->worker_task_ = worker_task;

  this->own_worker_task_ = 0;
}

void
TAO_NS_Object::proxy_poa (TAO_NS_POA_Helper* proxy_poa)
{
  // shutdown current poa.
  this->shutdown_proxy_poa ();

  this->proxy_poa_ = proxy_poa;

  // claim ownership.
  own_proxy_poa_ = 1;
}

void
TAO_NS_Object::set_qos (const CosNotification::QoSProperties & qos ACE_ENV_ARG_DECL)
{
  CosNotification::PropertyErrorSeq err_seq;

  TAO_NS_QoSProperties qos_properties;

  qos_properties.init (qos, err_seq);

  // Apply the appropriate concurrency QoS
  if (qos_properties.thread_pool ().is_valid ())
    {
      if (qos_properties.thread_pool ().value ().static_threads == 0)
        this->apply_reactive_concurrency (ACE_ENV_SINGLE_ARG_PARAMETER);
      else
        this->apply_thread_pool_concurrency (qos_properties.thread_pool ().value () ACE_ENV_ARG_PARAMETER);
    }
  else if (qos_properties.thread_pool_lane ().is_valid ())
    this->apply_lane_concurrency (qos_properties.thread_pool_lane ().value () ACE_ENV_ARG_PARAMETER);
  ACE_CHECK;

  // Update the Thread Task's QoS properties..
  this->worker_task_->update_qos_properties (qos_properties);

  // Inform subclasses of QoS changed.
  this->qos_changed (qos_properties);

  // Init the the overall QoS on this object.
  if (this->qos_properties_.init (qos, err_seq) == 1) // Unsupported Property
    ACE_THROW (CosNotification::UnsupportedQoS (err_seq));
}

void
TAO_NS_Object::apply_reactive_concurrency (ACE_ENV_SINGLE_ARG_DECL)
{
  TAO_NS_Reactive_Task* worker_task;

  ACE_NEW_THROW_EX (worker_task,
                    TAO_NS_Reactive_Task (),
                    CORBA::NO_MEMORY ());
  ACE_CHECK;

  worker_task->init (this->admin_properties_ ACE_ENV_ARG_PARAMETER);
  ACE_CHECK;

  this->worker_task_own (worker_task);
}

void
TAO_NS_Object::apply_thread_pool_concurrency (const NotifyExt::ThreadPoolParams& tp_params ACE_ENV_ARG_DECL)
{
  TAO_NS_ThreadPool_Task* worker_task;

  ACE_NEW_THROW_EX (worker_task,
                    TAO_NS_ThreadPool_Task (),
                    CORBA::NO_MEMORY ());
  ACE_CHECK;

  worker_task->init (tp_params, this->admin_properties_ ACE_ENV_ARG_PARAMETER);
  ACE_CHECK;

  this->worker_task_own (worker_task);
}

void
TAO_NS_Object::apply_lane_concurrency (const NotifyExt::ThreadPoolLanesParams& /*tpl_params*/ ACE_ENV_ARG_DECL)
{
  // No lane support
  ACE_THROW (CORBA::NO_IMPLEMENT ());
}

CosNotification::QoSProperties*
TAO_NS_Object::get_qos (ACE_ENV_SINGLE_ARG_DECL)
{
  CosNotification::QoSProperties_var properties;

  ACE_NEW_THROW_EX (properties,
                    CosNotification::QoSProperties (),
                    CORBA::NO_MEMORY ());

  this->qos_properties_.populate (properties);

  return properties._retn ();
}

void
TAO_NS_Object::qos_changed (const TAO_NS_QoSProperties& /*qos_properties*/)
{
  // NOP.
}

TAO_NS_Timer*
TAO_NS_Object::timer (void)
{
  return this->worker_task_->timer ();
}
