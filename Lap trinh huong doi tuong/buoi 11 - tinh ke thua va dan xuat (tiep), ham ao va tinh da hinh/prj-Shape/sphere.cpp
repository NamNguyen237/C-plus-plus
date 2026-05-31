#include<iostream>
#include<cmath>
#include "sphere.h"
using namespace std;

void Sphere::init() {
    cout << "Nhap ban kinh hinh cau: ";
    cin >> radius;
}
void Sphere::show() {
    cout << "\nHinh CAU\n";
    cout << "Ban kinh: " << radius << endl;
    cout << "Dien tich be mat: " << square() << endl;
    cout << "The tich: " << volume() << endl;
}
float Sphere::square() {
    return 4 * M_PI * radius * radius; //dien tich be mat hinh cau: 4 pi r^2
}
float Sphere::volume() {
    return (4.0/3.0) * M_PI * radius * radius * radius; //the tich hinh cau: 4/3 pi r^3
}
