#pragma once

#include "base_curve.hpp"
#include <utility>

namespace curves::core
{
class Line : public BaseCurve
{
  public:
    std::pair<int, int> params_;
    std::pair<int, int> return_coords(int t);
    std::pair<int, int> return_derivative(int t);
};
} // namespace curves::core
