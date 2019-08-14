#' Get the shared empty integer
#'
#' @examples
#'
#' get_shared_empty_int()
#'
#' @export
get_shared_empty_int <- function() {
  .Call(cshared_get_shared_empty_int)
}
