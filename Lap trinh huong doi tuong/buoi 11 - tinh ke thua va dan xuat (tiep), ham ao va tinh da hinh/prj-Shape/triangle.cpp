#include<iostream>
#include<cmath>
#include "triangle.h"
using namespace std;
void Triangle::show() {
    cout << "\nHinh TAM GIAC\n";
    cout << "Canh a: " << a << endl;
    cout << "Canh b: " << b << endl;
    cout << "Canh c: " << c << endl;
    cout << "Chu vi: " << perimeter() << endl;
    cout << "Dien tich: " << square() << endl;
}
void Triangle::init() {
    do {
        cout << "\nNhap chieu dai 3 canh cua tam giac:\n";
        cout << "Nhap canh a: ";
        cin >> a;
        cout << "Nhap canh b: ";
        cin >> b;
        cout << "Nhap canh c: ";
        cin >> c;
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
            cout << "Ba canh vua nhap khong hop le (khong thoa man bat dang thuc tam giac)! Vui long nhap lai.\n";
        }
    } while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a);
}
float Triangle::perimeter() {
    return a + b + c;
}
float Triangle::square() {
    float p = perimeter() / 2.0f;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

