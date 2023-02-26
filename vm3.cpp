// ММН
#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return 3*cos(2*x) - x + 0.25;
}

double df(double x) {
    return -6*sin(2*x) - 1;
}

int main() {
    double a = 2.5, b = 2.9, x0 = (a+b)/2.0, eps = 0.001, beta = 0.01;
    double x = x0 - beta*f(x0)/df(x0);
    
    do {
        x0 = x;
        x = x0 - beta*f(x0)/df(x0);
    } while (abs(x - x0) > eps);
    
    cout << "Найденный корень: " << x << endl;
    
    return 0;
}
