#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP cshared_get_shared_empty_int();

// Defined below, but we need it here to declare it as an
// object to register to the R side
SEXP cshared_init(SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"cshared_get_shared_empty_int", (DL_FUNC) &cshared_get_shared_empty_int, 0},
  {"cshared_init", (DL_FUNC) &cshared_init, 0},
  {NULL, NULL, 0}
};

void R_init_cshared(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

extern void cshared_init_utils();

SEXP cshared_init() {
  cshared_init_utils();
  return R_NilValue;
}
