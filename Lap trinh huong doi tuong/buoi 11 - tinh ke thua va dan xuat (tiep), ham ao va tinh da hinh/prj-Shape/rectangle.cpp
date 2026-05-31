#include<iostream>
#include<cmath>
#include "rectangle.h"
using namespace std;
void Rectangle::init() {
    cout << "\nNhap chieu dai canh hinh chu nhat: ";
    cin >> width;
    cout << "Nhap chieu rong canh hinh chu nhat: ";
    cin >> height;
}
void Rectangle::show() {
    cout << "\nHinh CHU NHAT\n";
    cout << "Chieu dai: " << width << endl;
    cout << "Chieu rong: " << height << endl;
    cout << "Chu vi: " << perimeter() << endl;
    cout << "Dien tich: " << square() << endl;
}
float Rectangle::perimeter() {
    return 2 * (width + height);
}
float Rectangle::square() {
    return width * height;
}
