#ifndef CSHARED_UTILS_H
#define CSHARED_UTILS_H

#include "cshared.h"

// We are going to be calling these objects from other `.c` files.
// To "share" it with them, we create this `utils.h` header file,
// and include the definition of our shared empty integer
// and our tidyverse string

SEXP cshared_shared_empty_int;

SEXP strings_tidyverse;

#endif
