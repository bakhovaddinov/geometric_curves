#include "line.hpp"

#include <catch2/catch_test_macros.hpp>
#include <utility>

using namespace curves::core;

TEST_CASE("Test Line")
{
    Line new_line(Point2D{2, 3});
    SECTION("Check coords")
    {
        REQUIRE(new_line.getCoords(10) == Point2D{2 * 10, 3 * 10});
    }
    SECTION("Check derivative")
    {
        REQUIRE(new_line.getDerivative(10) == Point2D{2, 3});
    }
}
