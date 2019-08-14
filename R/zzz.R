.onLoad <- function(libname, pkgname) {
  # When the package is loaded, call `cshared_init()` to initialize
  # our empty integer global variable!
  .Call(cshared_init)
}
