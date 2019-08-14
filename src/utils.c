#include "cshared.h"
#include "utils.h"

// Initialize a global variable to hold the SEXP integer
SEXP cshared_shared_empty_int = NULL;

SEXP cshared_init_utils() {
  // Overwrite our global variable with an empty integer
  cshared_shared_empty_int = Rf_allocVector(INTSXP, 0);

  // Preserve it! Ensure it isn't garbage collected.
  R_PreserveObject(cshared_shared_empty_int);

  // Ensure that we can't overwrite it later by mistake
  MARK_NOT_MUTABLE(cshared_shared_empty_int);

  return R_NilValue;
}
