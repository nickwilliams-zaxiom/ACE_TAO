// $Id $

// ===========================================================================================
// FILENAME
//   Naming_Loader.h
//
// DESCRIPTION
//   This class loads the Naming Service dynamically
//   either from svc.conf file or <string_to_object> call.
//
// AUTHORS
//   Priyanka Gontla <pgontla@ece.uci.edu>
//
// ==========================================================================================

#ifndef TAO_NAMING_LOADER_H
#define TAO_NAMING_LOADER_H

#include "tao/Object_Loader.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/Naming/Naming_Utils.h"

class ACE_Svc_Export TAO_Naming_Loader : public TAO_Object_Loader
{
public:

  // Constructor
  TAO_Naming_Loader (void);
  
  // Destructor
  ~TAO_Naming_Loader (void);

  // Called by the Service Configurator framework to initialize the
  // Event Service. Defined in <ace/Service_Config.h>
  virtual int init (int argc, char *argv[]);

  // Called by the Service Configurator framework to remove the
  // Event Service. Defined in <ace/Service_Config.h>
  virtual int fini (void);
  
  // This function call initializes the Naming Service given a reference to the
  // ORB and the command line parameters.
  CORBA::Object_ptr create_object (CORBA::ORB_ptr orb,
                                   int argc, char *argv[],
                                   CORBA::Environment &ACE_TRY_ENV)
     ACE_THROW_SPEC (());
  

 protected:
  TAO_Naming_Server naming_server_;
  // Instance of the TAO_Naming_Server
};

ACE_SVC_FACTORY_DECLARE (TAO_Naming_Loader)

#endif /* TAO_NAMING_LOADER_H */
