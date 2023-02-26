// 13 вариант
// МПИ
// 3cos(2x) - x + 0.25 = 0 [2.5;2.9]

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double eps = 0.001;
    double beta = 0.01;

    double x = 2.9;
    double prev_x;

    do {
        prev_x = x;
        x = prev_x - beta * (3 * cos(2 * prev_x) - prev_x + 0.25);
    } while (abs(x - prev_x) > eps);

    cout << "Корень уравнения: " << x << endl;

    return 0;
}
