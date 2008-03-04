
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl NODEAPPTEST_ROUNDTRIP_STUB
// ------------------------------
#ifndef NODEAPPTEST_ROUNDTRIP_STUB_EXPORT_H
#define NODEAPPTEST_ROUNDTRIP_STUB_EXPORT_H

#include "ace/config-all.h"

#if !defined (NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL)
#  define NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL 1
#endif /* ! NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL */

#if defined (NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL) && (NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL == 1)
#  if defined (NODEAPPTEST_ROUNDTRIP_STUB_BUILD_DLL)
#    define NODEAPPTEST_ROUNDTRIP_STUB_Export ACE_Proper_Export_Flag
#    define NODEAPPTEST_ROUNDTRIP_STUB_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define NODEAPPTEST_ROUNDTRIP_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* NODEAPPTEST_ROUNDTRIP_STUB_BUILD_DLL */
#    define NODEAPPTEST_ROUNDTRIP_STUB_Export ACE_Proper_Import_Flag
#    define NODEAPPTEST_ROUNDTRIP_STUB_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define NODEAPPTEST_ROUNDTRIP_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* NODEAPPTEST_ROUNDTRIP_STUB_BUILD_DLL */
#else /* NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL == 1 */
#  define NODEAPPTEST_ROUNDTRIP_STUB_Export
#  define NODEAPPTEST_ROUNDTRIP_STUB_SINGLETON_DECLARATION(T)
#  define NODEAPPTEST_ROUNDTRIP_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* NODEAPPTEST_ROUNDTRIP_STUB_HAS_DLL == 1 */

// Set NODEAPPTEST_ROUNDTRIP_STUB_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (NODEAPPTEST_ROUNDTRIP_STUB_NTRACE)
#  if (ACE_NTRACE == 1)
#    define NODEAPPTEST_ROUNDTRIP_STUB_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define NODEAPPTEST_ROUNDTRIP_STUB_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !NODEAPPTEST_ROUNDTRIP_STUB_NTRACE */

#if (NODEAPPTEST_ROUNDTRIP_STUB_NTRACE == 1)
#  define NODEAPPTEST_ROUNDTRIP_STUB_TRACE(X)
#else /* (NODEAPPTEST_ROUNDTRIP_STUB_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define NODEAPPTEST_ROUNDTRIP_STUB_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (NODEAPPTEST_ROUNDTRIP_STUB_NTRACE == 1) */

#endif /* NODEAPPTEST_ROUNDTRIP_STUB_EXPORT_H */

// End of auto generated file.
