// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:409

#ifndef _TAO_IDL_IMR_LOCATORS_H_
#define _TAO_IDL_IMR_LOCATORS_H_

#include /**/ "ace/pre.h"

#include "ImplRepoS.h"
#include "ImR_LocatorC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_sh.cpp:49

namespace POA_ImplementationRepository
{


  // TAO_IDL - Generated from
  // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_sh.cpp:90

  class Locator;
  typedef Locator *Locator_ptr;

  class _TAO_Locator_ThruPOA_Proxy_Impl;
  class _TAO_Locator_Direct_Proxy_Impl;
  class _TAO_Locator_Strategized_Proxy_Broker;

  class TAO_PortableServer_Export Locator
    : public virtual POA_ImplementationRepository::Administration
  {
  protected:
    Locator (void);

  public:
    // Useful for template programming.
    typedef ::ImplementationRepository::Locator _stub_type;
    typedef ::ImplementationRepository::Locator_ptr _stub_ptr_type;
    typedef ::ImplementationRepository::Locator_var _stub_var_type;

    Locator (const Locator& rhs);
    virtual ~Locator (void);

    virtual CORBA::Boolean _is_a (
        const char* logical_type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual void* _downcast (
        const char* logical_type_id
      );

    static void _is_a_skel (
        TAO_ServerRequest &req,
        void *servant,
        void *servant_upcall
        ACE_ENV_ARG_DECL
      );

    static void _non_existent_skel (
        TAO_ServerRequest &req,
        void *servant,
        void *servant_upcall
        ACE_ENV_ARG_DECL
      );

    static void _interface_skel (
        TAO_ServerRequest &req,
        void *servant,
        void *servant_upcall
        ACE_ENV_ARG_DECL
      );

    static void _component_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *servant_upcall
        ACE_ENV_ARG_DECL
      );

    virtual void _dispatch (
        TAO_ServerRequest &req,
        void *_servant_upcall
        ACE_ENV_ARG_DECL
      );

    ::ImplementationRepository::Locator *_this (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void activate_server_in_activator (
        const char * server,
        const char * activator
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      )) = 0;

    static void activate_server_in_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void remove_server_in_activator (
        const char * server,
        const char * activator
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      )) = 0;

    static void remove_server_in_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void shutdown_server_in_activator (
        const char * server,
        const char * activator
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      )) = 0;

    static void shutdown_server_in_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void server_is_shutting_down_in_activator (
        const char * server,
        const char * activator
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      )) = 0;

    static void server_is_shutting_down_in_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual CORBA::Long register_activator (
        const char * activator,
        ::ImplementationRepository::Administration_ptr admin,
        const ::ImplementationRepository::Locator::ServerNameList & servers
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void register_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void unregister_activator (
        const char * activator,
        ::CORBA::Long token
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void unregister_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void server_is_running_in_activator (
        const char * server,
        const char * activator,
        const char * addr,
        ::ImplementationRepository::ServerObject_ptr server_object
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      )) = 0;

    static void server_is_running_in_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/operation_sh.cpp:45

    virtual void find_in_activator (
        const char * server,
        const char * activator,
        ::ImplementationRepository::ServerInformation_out info
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      )) = 0;

    static void find_in_activator_skel (
        TAO_ServerRequest &_tao_req,
        void *_tao_servant,
        void *_tao_servant_upcall
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    activate_server_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    activate_server_with_startup_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    register_server_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    reregister_server_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    remove_server_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    shutdown_server_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    server_is_running_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    server_is_shutting_down_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    find_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    list_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    shutdown_repo_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2026

    static void
    find_ior_skel (
        TAO_ServerRequest &req,
        void *obj,
        void *context
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
  };

  ///////////////////////////////////////////////////////////////////////
  //               Strategized Proxy Broker Declaration
  //

  // TAO_IDL - Generated from
  // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/strategized_proxy_broker_sh.cpp:36

  class TAO_PortableServer_Export _TAO_Locator_Strategized_Proxy_Broker
    : public virtual TAO::Collocation_Proxy_Broker
  {
  public:
    _TAO_Locator_Strategized_Proxy_Broker (void);

    virtual ~_TAO_Locator_Strategized_Proxy_Broker (void);

    TAO::Collocation_Strategy
    get_strategy (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((CORBA::SystemException));

    void
    dispatch (
        CORBA::Object_ptr obj,
        CORBA::Object_out forward_obj,
        TAO::Argument ** args,
        int num_args,
        const char * op,
        size_t op_len,
        TAO::Collocation_Strategy strategy
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((CORBA::Exception));

    static _TAO_Locator_Strategized_Proxy_Broker *
    the_TAO_Locator_Strategized_Proxy_Broker (void);
  };

  //
  //            End Strategized Proxy Broker Declaration
  ///////////////////////////////////////////////////////////////////////


  ///////////////////////////////////////////////////////////////////////
  //                    ThruPOA Proxy Impl. Declaration
  //

  // TAO_IDL - Generated from
  // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/thru_poa_proxy_impl_sh.cpp:37

  class TAO_PortableServer_Export _TAO_Locator_ThruPOA_Proxy_Impl
    : public virtual ::POA_ImplementationRepository::_TAO_Administration_ThruPOA_Proxy_Impl
  {
  public:
    _TAO_Locator_ThruPOA_Proxy_Impl (void);

    virtual ~_TAO_Locator_ThruPOA_Proxy_Impl (void) {}

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    activate_server_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    remove_server_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    shutdown_server_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    server_is_shutting_down_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    register_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    unregister_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    server_is_running_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    find_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    activate_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    activate_server_with_startup (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    register_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::AlreadyRegistered,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    reregister_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::AlreadyRegistered,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    remove_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    shutdown_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    server_is_running (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    server_is_shutting_down (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    find (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    list (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    shutdown_repo (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    find_ior (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));
  };

  //
  //                ThruPOA  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////

  // TAO_IDL - Generated from
  // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/direct_proxy_impl_sh.cpp:31

  ///////////////////////////////////////////////////////////////////////
  //                    Direct  Impl. Declaration
  //

  class TAO_PortableServer_Export _TAO_Locator_Direct_Proxy_Impl
    : public virtual ::POA_ImplementationRepository::_TAO_Administration_Direct_Proxy_Impl
  {
  public:
    _TAO_Locator_Direct_Proxy_Impl (void);

    virtual ~_TAO_Locator_Direct_Proxy_Impl (void) {}

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    activate_server_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    remove_server_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    shutdown_server_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    server_is_shutting_down_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    register_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    unregister_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    server_is_running_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_operation/proxy_impl_xh.cpp:24

    static void
    find_in_activator (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    activate_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    activate_server_with_startup (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound,
        ::ImplementationRepository::CannotActivate
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    register_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::AlreadyRegistered,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    reregister_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::AlreadyRegistered,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    remove_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    shutdown_server (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    server_is_running (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    server_is_shutting_down (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    find (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    list (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    shutdown_repo (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    // TAO_IDL - Generated from
    // E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_interface.cpp:2214

    static void
    find_ior (
        TAO_Abstract_ServantBase *servant,
        TAO::Argument ** args,
        int num_args
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ::ImplementationRepository::NotFound
      ));
  };

  //
  //                Direct  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////



// TAO_IDL - Generated from
// E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module/module_sh.cpp:80

} // module ImplementationRepository

// TAO_IDL - Generated from
// E:\doc_cvs\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:1012


#if defined (__ACE_INLINE__)
#include "ImR_LocatorS.inl"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"
#endif /* ifndef */
