#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;
    double pi = M_PI;
    double chuvi = 2*pi*r, dientich = pi*r*r;
    cout << "\nChu vi cua hinh tron tren la: " << chuvi;
    cout << "\nDien tich cua hinh tron tren la " << dientich;
    return 0;
}