// Аналитически
#include <iostream>
#include <cmath>

double f(double x) {
    return 2 * sin(x) - x + 0.4;
}

double df(double x) {
    return 2 * cos(x) - 1;
}

int main() {
    double a = -2.5;
    double b = -1.5;
    double eps = 0.001;
    double beta = 0.01;

    double fa = f(a);
    double fb = f(b);

    if (fa * fb > 0) {
        std::cout << "На отрезке [" << a << "," << b << "] нет корней!" << std::endl;
        return 0;
    }

    double x = a;
    double last_x = x;
    double fx = f(x);
    double dfx = df(x);

    while (std::abs(x - last_x) > eps) {
        last_x = x;
        x = x - fx / dfx;
        fx = f(x);
        dfx = df(x);
    }

    std::cout << "Найденный корень: " << x << std::endl;

    return 0;
}
