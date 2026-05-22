#include "point.h"
#include "threedimpoint.h"
#include<bits/stdc++.h>
using namespace std;

ThreeDimPoint::ThreeDimPoint(float a, float b, float c)
:Point(a,b) //tao doi tuong ham co so truoc co x = a, y = b
{
    cout << "\nHTL cua ThreeDimPoint()";
    z = c; //doi tuong co them thuoc tinh moi cua class dan xuat la z = c
}
void ThreeDimPoint::Nhap(const char *s) {
    Point::Init(s);
    cout << "\nz = ";
    cin >> z;
}
void ThreeDimPoint::Xuat(const char *s) {
    Point::Show(s);
    cout << "\nz = " << z;
}
void ThreeDimPoint::DiChuyen(float dx, float dy, float dz)
{
    Point::Move(dx,dy);
    z = z + dz;
}
float ThreeDimPoint::KhoangCachO(){
    float d = Point::Distance()*Point::Distance();
    return sqrt(d + z*z);
}
float ThreeDimPoint::KhoangCach(const ThreeDimPoint &p3) {
    float d = Point::Distance(p3)*Point::Distance(p3);
    return sqrt(d + (z-p3.z)*(z-p3.z));
}
bool ThreeDimPoint::TrungNhau(const ThreeDimPoint &p3) {
    return Point::coincide(p3) && (z == p3.z);
}
