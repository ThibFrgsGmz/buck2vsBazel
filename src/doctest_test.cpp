#include "my_lib.h"
#include <doctest/doctest.h>

TEST_CASE("Sum, SumbNegativeValues") {
    CHECK( -7, my_lib::add(-2, -5) );
}

TEST_CASE("Sum, SumPositiveValues") {
    CHECK( 6, my_lib::add(1, 5) );
}
