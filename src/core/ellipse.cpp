#include "ellipse.hpp"

#include <cmath>

namespace curves::core
{
Ellipse::Ellipse(double radius_x, double radius_y)
    : radius_x(radius_x)
    , radius_y(radius_y)
{
}
Point2D Ellipse::getCoords(double t)
{
    double x = radius_x * std::cos(t);
    double y = radius_y * std::sin(t);
    return Point2D{x, y};
}
Point2D Ellipse::getDerivative(double t)
{
    double x = -radius_x * std::sin(t);
    double y = radius_y * std::cos(t);
    return Point2D{x, y};
}
} // namespace curves::core
