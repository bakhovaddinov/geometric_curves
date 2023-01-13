#include "line.hpp"

#include <catch2/catch_test_macros.hpp>
#include <utility>

using namespace curves::core;

TEST_CASE("Test Line")
{
    std::pair<int, int> direction;
    direction.first = 2;
    direction.second = 3;
    Line new_line(direction);
    SECTION("insert items")
    {
    }
}
