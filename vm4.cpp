// ММН
#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return 2*sin(x) - x + 0.4;
}

double f_deriv(double x) {
    return 2*cos(x) - 1;
}

double modified_newton(double x, double eps, double beta) {
    while (abs(f(x)) > eps) {
        x = x - beta*f(x)/f_deriv(x);
    }
    return x;
}

int main() {
    double eps = 0.001;
    double beta = 0.01;
    double x0 = -2.0;
    double x1 = -1.5;
    double root = modified_newton(x0, eps, beta);

    if (f(x0) * f(x1) < 0) {
        cout << "Уравнение имеет единственный корень на отрезке [" << x0 << ", " << x1 << "]" << endl;
        cout << "Корень равен: " << root << endl;
    } else {
        cout << "Уравнение не имеет единственного корня на отрезке [" << x0 << ", " << x1 << "]" << endl;
    }

    return 0;
}
