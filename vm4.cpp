// Аналитически

#include <iostream>
#include <math.h>

int main() {
    const double eps = 0.001;
    const double beta = 0.01;

    double a = 2.5;
    double b = 2.9;
    double x;

    do {
        x = (a + b) / 2;
        double f = 3 * cos(2 * x) - x + 0.25;
        if (f > 0) {
            b = x;
        } else {
            a = x;
        }
    } while (fabs(b - a) > eps);

    std::cout << "Найденный корень: " << x << std::endl;

    return 0;
}
