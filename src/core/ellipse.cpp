#include "ellipse.hpp"

namespace curves::core
{
std::pair<int, int> Ellipse::return_coords(int t)
{
    int x = params_.first * cos(t);
    int y = params_.second * sin(t);
    return std::make_pair(x, y);
};
std::pair<int, int> Ellipse::return_derivative(int t)
{
    int x = -params_.first * sin(t);
    int y = -params_.second * cos(t);
    return std::make_pair(x, y);
};
} // namespace curves::core
