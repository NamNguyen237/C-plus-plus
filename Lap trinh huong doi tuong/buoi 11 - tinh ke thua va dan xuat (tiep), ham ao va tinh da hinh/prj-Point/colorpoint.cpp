#include "colorpoint.h"
#include<iostream>
#include<cstring>
using namespace std;

ColorPoint::ColorPoint(float a, float b, const char *c) : Point(a,b){
    color = new char[strlen(c)+1];
    strcpy(color, c);
}

ColorPoint::ColorPoint(const ColorPoint &p){
    color = new char[strlen(p.color)+1];
    strcpy(color, p.color);
}

ColorPoint::~ColorPoint(){
    delete [] color;
}

void ColorPoint::Nhap(const char *s){
    Point::Init(s);
    cout << "\nNhap mau: ";
    char c [100];
    cin.ignore();
    cin.getline(c, 100);
    color = new char[strlen(c)+1];
    strcpy(color, c);
}
void ColorPoint::Xuat(const char *s){
    Point::Show(s);
    cout << "\nMau = " << color;
}

void ColorPoint::DatMau(const char *c){
    color = new char[strlen(c)+1];
    strcpy(color, c);
}

char* ColorPoint::LayMau(){
    return color;
}

ColorPoint & ColorPoint::operator=(const ColorPoint &p){
    Point::operator=(p);
    color = new char[strlen(p.color)+1];
    strcpy(color, p.color);
    return *this;
}

istream &operator>>(istream &in, ColorPoint &p){
    in >> (Point &)p;
    cout << "\nNhap mau: ";
    char c[100];
    in.ignore();
    in.getline(c, 100);
    delete [] p.color;
    p.color = new char[strlen(c) + 1];
    strcpy(p.color, c);
    return in;
}

ostream &operator<<(ostream &out, const ColorPoint &p){
    out << (Point &)p;
    out << "\nMau = " << p.color;
    return out;
}
