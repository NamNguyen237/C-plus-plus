#include<iostream>
#include<cmath>
#include "box.h"
using namespace std;

void Box::init() {
    cout << "Nhap chieu dai hinh hop chu nhat: ";
    cin >> length;
    cout << "Nhap chieu rong hinh hop chu nhat: ";
    cin >> width;
    cout << "Nhap chieu cao hinh hop chu nhat: ";
    cin >> height;
}
void Box::show() {
    cout << "\nHinh HOP CHU NHAT\n";
    cout << "Chieu dai: " << length << endl;
    cout << "Chieu rong: " << width << endl;
    cout << "Chieu cao: " << height << endl;
    cout << "Dien tich: " << square() << endl;
    cout << "The tich: " << volume() << endl;
}
float Box::square() {
    return 2 * (length * width + length * height + width * height); //dien tich be mat hinh hop chu nhat: 2(lw + lh + wh)
}
float Box::volume() {
    return length * width * height; //the tich hinh hop chu nhat: lwh
}
