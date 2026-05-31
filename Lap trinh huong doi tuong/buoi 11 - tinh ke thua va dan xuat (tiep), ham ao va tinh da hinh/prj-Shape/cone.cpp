#include<iostream>
#include<cmath>
#include "cone.h"
using namespace std;

void Cone::init() {
    cout << "Nhap ban kinh hinh non: ";
    cin >> radius;
    cout << "Nhap chieu cao hinh non: ";
    cin >> height;
}
void Cone::show() {
    cout << "\nHinh NON\n";
    cout << "Ban kinh: " << radius << endl;
    cout << "Chieu cao: " << height << endl;
    cout << "Dien tich be mat: " << square() << endl;
    cout << "The tich: " << volume() << endl;
}
float Cone::square() {
    return M_PI * radius * (radius + sqrt(height*height + radius*radius));
}
float Cone::volume() {
    return (1.0/3.0) * M_PI * radius * radius * height;
}
