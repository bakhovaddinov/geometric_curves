#include "line.hpp"
#include "base_curve.hpp"

namespace curves::core
{
Line::Line(Point2D direction)
    : direction(std::move(direction))
{
}

Point2D Line::getCoords(double t)
{
    return direction * t;
}

Point2D Line::getDerivative(double)
{
    return direction;
}
} // namespace curves::core
