#include "base_curve.hpp"

namespace curves::core
{
Point2D operator*(Point2D point, double t)
{
    point.x *= t;
    point.y *= t;
    return point;
}

bool operator==(const Point2D &p1, const Point2D &p2)
{
    return (p1.x == p2.x) && (p1.y == p2.y);
}
} // namespace curves::core
