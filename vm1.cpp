// МПИ
#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return 2*sin(x) - x + 0.4;
}

int main() {
    double x0 = -2.5;  // Начальное приближение
    double x;
    double eps = 0.001;
    double beta = 0.01;

    do {
        x = x0;
        x0 = x + beta*f(x);  // Формула метода простых итераций
    } while (abs(x0 - x) >= eps);

    cout << "Корень уравнения 2sin(x) - x + 0.4 = 0 на отрезке [-2.5, -1.5] равен: " << x0 << endl;

    return 0;
}

