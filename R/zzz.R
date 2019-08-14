.onLoad <- function(libname, pkgname) {
  # When the package is loaded, this calls `cshared_init_utils()` to initialize
  # our global variables!
  .Call(cshared_init_utils)
}
