#pragma once

namespace curves::core
{
struct Point2D {
    double x;
    double y;
};

Point2D operator*(Point2D point, double t);
bool operator==(const Point2D &p1, const Point2D &p2);

class BaseCurve
{
  public:
    virtual Point2D getCoords(double t) = 0;
    virtual Point2D getDerivative(double t) = 0;
    virtual ~BaseCurve() = default;
};
} // namespace curves::core
