#include "ellipse.hpp"

#include <catch2/catch_test_macros.hpp>
#include <cmath>
#include <utility>

using namespace curves::core;

TEST_CASE("Test Ellipse")
{
    Ellipse new_ellipse(4, 9);
    SECTION("Check coords")
    {
        REQUIRE(new_ellipse.getCoords(5) == Point2D{4 * std::cos(5), 9 * std::sin(5)});
    }
    SECTION("Check derivative")
    {
        REQUIRE(new_ellipse.getDerivative(5) == Point2D{-4 * std::sin(5), 9 * std::cos(5)});
    }
}
