.onLoad <- function(libname, pkgname) {
  # When the package is loaded, call `cshared_init_utils()` to initialize
  # our empty integer global variable!
  .Call(cshared_init_utils)
}
