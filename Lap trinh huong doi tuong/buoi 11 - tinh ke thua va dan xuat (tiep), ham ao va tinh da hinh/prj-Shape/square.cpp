#include<iostream>
#include<cmath>
#include "square.h"
using namespace std;
void Square::show() {
    cout << "\nHinh VUONG\n";
    cout << "Canh: " << width << endl;
    cout << "Chu vi: " << perimeter() << endl;
    cout << "Dien tich: " << square() << endl;
}
void Square::init() {
    cout << "\nNhap chieu dai canh: ";
    cin >> width;
}
float Square::perimeter() {
    return 4 * width;
}
float Square::square() {
    return width * width;   
}