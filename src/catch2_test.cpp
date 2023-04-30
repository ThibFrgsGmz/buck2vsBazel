#include "my_lib.h"
#include <catch2/catch.hpp>

TEST_CASE( "Sum negative values", "[sum]" ) {
    REQUIRE( my_lib::add(-2, -5) == -7 );
}

TEST_CASE( "Sum positive values", "[sum]" ) {
    REQUIRE( my_lib::add(1, 5) == 6 );
}
