#include<bits/stdc++.h>
#include "point.h"
using namespace std;
Point::Point(float a, float b)
{
    cout << "\nHTL tai " << this;
    x = a;
    y = b;
}
Point::Point(const Point &p)
{
    cout << "\nHTL sao chep tai " << this;
    x = p.x;
    y = p.y;
}
Point::~Point(){
    cout << "\nHHB tai " << this;
}
void Point::Init(const char *s)
{
    cout << "\nNhap toa do cho diem " << s << ": ";
    cout << "\nx = "; cin >> x;
    cout << "\ny = "; cin >> y;
}
void Point::Show(const char *s){
    cout << "\nToa do cua diem " << s << ": ";
    cout << "\nx = " << x << "; y = " << y;

}
void Point::Move(float dx, float dy){
    cout << "\ndx = " << dx;
    cout << "; dy = " << dy;
    x += dx;
    y += dy;
}
float Point::Distance() //KC toi O(0;0)
{
    cout << "\nKC toi O(0;0): ";
    float d = sqrt(x*x+y*y);
    cout << d;
    return d;
}
float Point::Distance(const Point &p)
{
    cout << "\nKC toi (" << p.x << ", " << p.y << "): ";
    float d = sqrt(pow((x-p.x),2)+pow((y-p.y),2));
    cout << d;
    return d;
}
bool Point::coincide(const Point &p)//ham kiem tra 2 diem trung nhau
{
    if ((x == p.x) && (y==p.y)) return true;
    return false;
}
bool coincide(const Point &p1, const Point &p2) //ham tu do la ban cua lop point
{
    if ((p1.x == p2.x) && (p1.y==p2.y)) return true;
    return false;
}
