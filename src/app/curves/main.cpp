#include "base_curve.hpp"
#include "ellipse.hpp"
#include "line.hpp"

#include <cmath>
#include <fmt/core.h>
#include <iostream>
#include <numbers>
#include <random>
#include <time.h>
#include <vector>

using namespace curves::core;

double generateDouble(double lower_bound = 0.1, double upper_bound = 100.0)
{
    static std::random_device random_device;
    static std::mt19937 random_number_generator(random_device());
    std::uniform_real_distribution<double> distribution(lower_bound, upper_bound);
    return distribution(random_number_generator);
}

int main()
{
    const double t = M_PI / 4.0;

    std::vector<Line> random_lines;
    std::vector<Ellipse> random_ellipses;

    fmt::print("For a bunch of random lines:\n");
    for (int i = 0; i < 10; i++) {
        Point2D random_origin{generateDouble(), generateDouble()};
        Point2D random_direction{generateDouble(), generateDouble()};
        random_lines.push_back(Line(random_origin, random_direction));
        Point2D current_coords = random_lines[i].getCoords(t);
        Point2D current_derivative = random_lines[i].getDerivative(t);
        fmt::print("\nCoords for {} line: {}, {}\n", i + 1, current_coords.x, current_coords.y);
        fmt::print("Derivative for {} line: {}, {}\n", i + 1, current_derivative.x, current_derivative.y);
    }

    fmt::print("\nFor a bunch of random ellipses:\n");
    for (int i = 0; i < 10; i++) {
        double random_radius_x = generateDouble();
        double random_radius_y = generateDouble();
        random_ellipses.push_back(Ellipse(random_radius_x, random_radius_y));
        Point2D current_coords = random_lines[i].getCoords(t);
        Point2D current_derivative = random_lines[i].getDerivative(t);
        fmt::print("\nCoords for {} ellipse: {}, {}\n", i + 1, current_coords.x, current_coords.y);
        fmt::print("Derivative for {} ellipse: {}, {}\n", i + 1, current_derivative.x, current_derivative.y);
    }

    return EXIT_SUCCESS;
}
