
//=============================================================================
/**
 *  @file    bd_wstr_seq.h
 *
 *   Tests bounded sequences of wide strings
 *
 *  @author   Jeff Parsons
 */
//=============================================================================


#ifndef PARAM_TEST_BOUNDED_WSTRING_SEQUENCE_H
#define PARAM_TEST_BOUNDED_WSTRING_SEQUENCE_H

#include "param_testC.h"

// =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
//           test typedefed sequences (in our case, sequences of wstrings)
// =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*

class Test_Bounded_WString_Sequence
{
public:
  /// ctor
  Test_Bounded_WString_Sequence (void);

  /// dtor
  ~Test_Bounded_WString_Sequence (void);

  /// run the SII test
  int run_sii_test (Param_Test_ptr objref);

  /// return operation name
  const char *opname (void) const;

  /// set values for parameters
  int init_parameters (Param_Test_ptr objref);

  /// reset values for CORBA
  int reset_parameters (void);

  /// check if results are valid
  CORBA::Boolean check_validity (void);

  /// check if results are valid. This is used for DII results
  CORBA::Boolean check_validity (CORBA::Request_ptr req);

  /// print all the values
  void print_values (void);

  /// invoke DII request with appropriate exception handling.
  void dii_req_invoke (CORBA::Request *);

private:
  /// operation name
  char *opname_;

  /// in parameter
  Param_Test::Bounded_WStrSeq_var in_;

  /// inout parameter
  Param_Test::Bounded_WStrSeq_var inout_;

  /// out parameter
  Param_Test::Bounded_WStrSeq_var out_;

  /// return value
  Param_Test::Bounded_WStrSeq_var ret_;
};

#endif /* PARAM_TEST_BOUNDED_WSTRING_SEQUENCE_H */
