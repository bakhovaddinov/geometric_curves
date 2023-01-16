#include "line.hpp"
#include "base_curve.hpp"

namespace curves::core
{
Line::Line(Point2D origin, Point2D direction) // TODO: add starting point
    : origin(std::move(origin))
    , direction(std::move(direction))
{
}

Point2D Line::getCoords(double t)
{
    return origin + direction * t;
}

Point2D Line::getDerivative(double)
{
    return direction;
}
} // namespace curves::core
