// ММН - метод модифицированного Ньютона
#include <iostream>
#include <cmath>

using namespace std;

// Функция, вычисляющая значение функции в точке x
double f(double x) {
return 2*sin(x) - x + 0.4;
}

// Функция, вычисляющая производную функции в точке x
double f_deriv(double x) {
return 2*cos(x) - 1;
}

// Функция, вычисляющая корень нелинейного уравнения методом модифицированного Ньютона
double modified_newton(double x, double eps, double beta) {
while (abs(f(x)) > eps) { // Пока значение функции в точке x больше заданной точности eps
x = x - beta*f(x)/f_deriv(x); // Формула метода модифицированного Ньютона
}
return x; // Возвращаем значение корня
}

int main() {
double eps = 0.001; // Заданная точность
double beta = 0.01; // Заданный коэффициент бета
double x0 = -2.0; // Левая граница отрезка, на котором ищется корень
double x1 = -1.5; // Правая граница отрезка, на котором ищется корень
double root = modified_newton(x0, eps, beta); // Находим корень уравнения методом модифицированного Ньютона


// Проверяем условие единственности корня на отрезке [x0, x1] методом промежуточных значений
if (f(x0) * f(x1) < 0) {
    cout << "Уравнение имеет единственный корень на отрезке [" << x0 << ", " << x1 << "]" << endl;
    cout << "Корень равен: " << root << endl;
} else {
    cout << "Уравнение не имеет единственного корня на отрезке [" << x0 << ", " << x1 << "]" << endl;
}

return 0;

}
