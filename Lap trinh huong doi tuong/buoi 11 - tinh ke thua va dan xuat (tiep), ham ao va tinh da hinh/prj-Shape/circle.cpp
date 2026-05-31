#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;

void Circle::show()
{
    cout << "\nHINH TRON";
    cout << "\nBan kinh: " << radius;
    cout << "\nChu vi: " << perimeter();
    cout << "\nDien tich: " << square();
}
void Circle::init()
{
    cout << "\nNhap ban kinh:";
    cin >> radius;
}
float Circle::perimeter()
{
    return 2*M_PI*radius;
}
float Circle::square()
{
    return M_PI*radius*radius;
}
