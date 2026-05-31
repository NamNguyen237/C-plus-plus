#include<iostream>
#include<cmath>
#include "cube.h"
using namespace std;

void Cube::init() {
    cout << "Nhap canh hinh lap phuong: ";
    cin >> width;
}
void Cube::show() {
    cout << "\nHinh LAP PHUONG\n";
    cout << "Canh: " << width << endl;
    cout << "Dien tich be mat: " << square() << endl;
    cout << "The tich: " << volume() << endl;
}
float Cube::square() {
    return 6 * width * width; //dien tich be mat hinh lap phuong: 6 a^2
}
float Cube::volume() {
    return width * width * width; //the tich hinh lap phuong: a^3
}
