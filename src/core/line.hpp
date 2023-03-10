#pragma once

#include "base_curve.hpp"
#include <utility>

namespace curves::core
{
class Line : public BaseCurve
{
  public:
    explicit Line(Point2D origin, Point2D direction);
    Point2D getCoords(double t);
    Point2D getDerivative(double t);

  private:
    Point2D origin;
    Point2D direction;
};
} // namespace curves::core
