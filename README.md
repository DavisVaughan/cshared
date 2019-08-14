
<!-- README.md is generated from README.Rmd. Please edit that file -->

# cshared

cshared is the companion package to the blog post: [Persistant R Objects
in
C](https://blog.davisvaughan.com/2019/08/13/persistant-r-objects-in-c/).

It allows you to create and persistantly use shared R global variables
from C.

``` r
library(cshared)
get_shared_objects()
#> [[1]]
#> integer(0)
#> 
#> [[2]]
#> [1] "tidyverse"
```
