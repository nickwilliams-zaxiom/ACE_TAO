// -*- C++ -*-

//=============================================================================
/**
 *  @file Policy_Strategy.h
 *
 *  $Id$
 *
 *  @author  Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_POLICY_STRATEGY_H
#define TAO_POLICY_STRATEGY_H
#include /**/ "ace/pre.h"

#include "ace/Service_Object.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/CORBA_macros.h"
#include "tao/Environment.h"

class TAO_Root_POA;

namespace TAO
{
  namespace Portable_Server
  {
    class Policy_Strategy
      : public ACE_Service_Object
    {
    public:
      virtual void strategy_init(TAO_Root_POA *poa ACE_ENV_ARG_DECL) = 0;

      virtual void strategy_cleanup(ACE_ENV_SINGLE_ARG_DECL) = 0;

      virtual ~Policy_Strategy (void) {};
    };
  }
}

#include /**/ "ace/post.h"
#endif /* TAO_POLICY_STRATEGY_H */
