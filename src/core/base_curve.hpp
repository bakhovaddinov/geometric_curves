#pragma once

#include <vector>
namespace curves::core
{
class BaseCurve
{
  public:
    virtual std::pair<int, int> return_coords(int t) = 0;
    virtual std::pair<int, int> return_derivative(int t) = 0;
    std::pair<int, int> params_;
    BaseCurve(std::pair<int, int> params);
};
} // namespace curves::core
