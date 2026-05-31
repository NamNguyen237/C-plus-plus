#include "cylinder.h"
#include <iostream>
#include <cmath>
using namespace std;

void Cylinder::init()
{
    cout << "\nChieu cao: ";
    cin >> height;
    cout << "\nBan kinh: ";
    cin >> radius;
}
void Cylinder::show()
{
    cout << "\nHINH TRU";
    cout << "\nChieu cao: " << height;
    cout << "\nBan kinh: " << radius;
    cout << "\nDien tich: " << square();
    cout << "\nThe tich: " << volume();
}
float Cylinder::square()
{
    float Sday = M_PI*radius*radius;
    float p = 2*M_PI*radius;
    float sxq = p * height;
    return sxq + 2*Sday;
}
float Cylinder::volume()
{
    float Sday = M_PI*radius*radius;
    return Sday * height;
}
