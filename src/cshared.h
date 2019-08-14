#ifndef CSHARED_H
#define CSHARED_H

// I like to use a `pkgname.h` file as the main place to define and include
// these 3 items. Then I just `#include` this header in all the other files
#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

// If this package was bigger and had a larger API, I might also use this
// header file as a place for function definitions so that I could call
// useful functions across `.c` files.

#endif
