#include "base_curve.hpp"
#include "ellipse.hpp"
#include "line.hpp"

#include <iostream>
#include <numbers>
#include <time.h>
#include <vector>

using namespace curves::core;

double generate_double()
{
    const long max_rand = 1000000L;
    double lower_bound = 0;
    double upper_bound = 100;

    srandom(time(NULL));

    return lower_bound + (upper_bound - lower_bound) * (random() % max_rand) / max_rand;
}

int main()
{
    const int t = std::numbers::pi / 4;

    std::vector<Line> random_lines;
    std::vector<Ellipse> random_ellipses;

    std::cout << "For a bunch of random lines:\n" << std::endl;
    for (int i = 0; i < 10; i++) {
        Point2D random_direction = {generate_double(), generate_double()};
        random_lines.push_back(Line(random_direction));
    }

    std::cout << "For a bunch of random lines:\n" << std::endl;
    for (int i = 0; i < 10; i++) {
        double random_radius_x = generate_double();
        double random_radius_y = generate_double();
        random_ellipses.push_back(Ellipse(random_radius_x, random_radius_y));
    }

    return EXIT_SUCCESS;
}
