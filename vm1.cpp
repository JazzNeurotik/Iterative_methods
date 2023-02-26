// 13 вариант
// МПИ - Метод Простых Итераций
// 3cos(2x) - x + 0.25 = 0 [2.5;2.9]

#include <iostream>
#include <cmath>

using namespace std;

int main() {
double eps = 0.001; // заданная точность
double beta = 0.01; // параметр метода простых итераций
double x = 2.9; // начальное приближение
double prev_x; // предыдущее значение x

do {
    prev_x = x;
    x = prev_x - beta * (3 * cos(2 * prev_x) - prev_x + 0.25); // формула метода простых итераций
} while (abs(x - prev_x) > eps); // продолжаем цикл, пока не достигнем заданной точности

cout << "Корень уравнения: " << x << endl; // вывод результата

return 0;

}