#' Get the shared objects
#'
#' @examples
#'
#' get_shared_objects()
#'
#' @export
get_shared_objects <- function() {
  .Call(cshared_get_shared_objects)
}
