// МН
#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return 3*cos(2*x) - x + 0.25;
}

double f_prime(double x)
{
    return -6*sin(2*x) - 1;
}

int main()
{
    double eps = 0.001;
    double beta = 0.01;

    double a = 2.5;
    double b = 2.9;

    double x = (a + b) / 2;

    do
    {
        double x_new = x - beta*f(x) / f_prime(x);
        if (abs(x_new - x) < eps)
        {
            x = x_new;
            break;
        }
        x = x_new;
    } while (true);

    cout << "Найденный корень: " << x << endl;

    return 0;
}
