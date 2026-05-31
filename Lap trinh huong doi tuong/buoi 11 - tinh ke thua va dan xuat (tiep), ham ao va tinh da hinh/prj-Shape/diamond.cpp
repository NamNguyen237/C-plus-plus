#include<iostream>
#include<cmath>
#include "diamond.h"
using namespace std;

void Diamond::init() {
    cout << "\nNhap duong cheo thu nhat hinh thoi: ";
    cin >> d1;
    cout << "Nhap duong cheo thu hai hinh thoi: ";
    cin >> d2;
    width = sqrt((d1 / 2.0) * (d1 / 2.0) + (d2 / 2.0) * (d2 / 2.0));
}
void Diamond::show() {
    cout << "\nHinh THOI\n";
    cout << "Duong cheo 1: " << d1 << endl;
    cout << "Duong cheo 2: " << d2 << endl;
    cout << "Canh: " << width << endl;
    cout << "Chu vi: " << perimeter() << endl;
    cout << "Dien tich: " << square() << endl;
}
float Diamond::perimeter() {
    return 4 * width;
}
float Diamond::square() {
    return (d1*d2)/2;
}
