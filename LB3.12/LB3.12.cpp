#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������
    cout << "x = "; cin >> x;

    A = 4.95 * pow(x, 2);
    // ����� 1: ������������ � ��������� ����
    if (x < -3.5)
        B = 4. + pow(x, -2);
    if (-3.5 <= x && x < 1)
        B = tan((3.5 + x) / 5.);
    if (x >= 1)
        B = sin(3 * x) - cos(x);
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    // ����� 2: ������������ � ����� ����
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