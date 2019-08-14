#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

// .Call() calls
extern SEXP cshared_get_shared_objects();
extern void cshared_init_utils();

static const R_CallMethodDef CallEntries[] = {
  {"cshared_get_shared_objects", (DL_FUNC) &cshared_get_shared_objects, 0},
  {"cshared_init_utils", (DL_FUNC) &cshared_init_utils, 0},
  {NULL, NULL, 0}
};

void R_init_cshared(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
