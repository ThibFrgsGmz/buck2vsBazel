#include "my_lib.h"
#include <gtest/gtest.h>

TEST(Sum, SumbNegativeValues) {
    EXPECT_EQ( -7, my_lib::add(-2, -5) );
}

TEST(Sum, SumPositiveValues) {
    EXPECT_EQ( 6, my_lib::add(1, 5) );
}
