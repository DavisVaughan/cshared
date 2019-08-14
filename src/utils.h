#include "cshared.h"

// We are going to be calling this object from other `.c` files.
// To "share" it with them, we create this `utils.h` header file,
// and include the definition of our shared empty integer
SEXP cshared_shared_empty_int;
