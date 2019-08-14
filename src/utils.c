#include "cshared.h"
#include "utils.h"

// Initialize a global variable to hold the SEXP integer
SEXP cshared_shared_empty_int = NULL;

// Initialize a global variable to hold the SEXP string
SEXP strings_tidyverse = NULL;

SEXP cshared_init_utils() {
  // Overwrite our global variable with an empty integer
  cshared_shared_empty_int = Rf_allocVector(INTSXP, 0);

  // Preserve it! Ensure it isn't garbage collected.
  R_PreserveObject(cshared_shared_empty_int);

  // Ensure that we can't overwrite it later by mistake
  MARK_NOT_MUTABLE(cshared_shared_empty_int);


  // Overwrite our global variable with an string vector of size 1
  strings_tidyverse = Rf_allocVector(STRSXP, 1);

  // Preserve it! Ensure it isn't garbage collected.
  R_PreserveObject(strings_tidyverse);

  // Set the first element to hold the CHARSXP: "tidyverse"
  SET_STRING_ELT(strings_tidyverse, 0, Rf_mkChar("tidyverse"));

  // Now mark it as immutable
  MARK_NOT_MUTABLE(strings_tidyverse);


  return R_NilValue;
}
