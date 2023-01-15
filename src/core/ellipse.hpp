#pragma once

#include "base_curve.hpp"

namespace curves::core
{
class Ellipse : public BaseCurve
{
  public:
    Ellipse(double radius_x, double radius_y);
    Point2D getCoords(double t);
    Point2D getDerivative(double t);

  private:
    double radius_x;
    double radius_y;
};
} // namespace curves::core
