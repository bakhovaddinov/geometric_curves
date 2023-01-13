#include "line.hpp"

namespace curves::core
{
std::pair<int, int> Line::return_coords(int t)
{
    int x = params_.first * t;
    int y = params_.second * t;
    return std::make_pair(x, y);
};
std::pair<int, int> Line::return_derivative(int t)
{
    int x = params_.first;
    int y = params_.second;
    return std::make_pair(x, y);
};
} // namespace curves::core
