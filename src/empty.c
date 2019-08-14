#include "cshared.h"
#include "utils.h" // To access `cshared_shared_empty_int`

SEXP cshared_get_shared_empty_int() {
  return cshared_shared_empty_int;
}
