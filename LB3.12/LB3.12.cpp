#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу
    cout << "x = "; cin >> x;

    A = 4.95 * pow(x, 2);
    // спосіб 1: розгалуження в скороченій формі
    if (x < -3.5)
        B = 4. + pow(x, -2);
    if (-3.5 <= x && x < 1)
        B = tan((3.5 + x) / 5.);
    if (x >= 1)
        B = sin(3 * x) - cos(x);
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    // спосіб 2: розгалуження в повній формі
    if (x < -3.5)
        B = 4 + pow(x, -2);
    else
        if (x >= 1)
            B = sin(3 * x) - cos(x);
        else
            B = tan((3.5 + x) / 5.);
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}