#ifndef THREEDIMPOINT_H
#define THREEDIMPOINT_H
#include<bits/stdc++.h>
#include "point.h"
using namespace std;
class ThreeDimPoint : public Point {
private:
    float z; //x, y da co o class co so Point
public:
    ThreeDimPoint(float a = 0, float b = 0, float c = 0);
    void Nhap(const char *s);
    void Xuat(const char *s);
    void DiChuyen(float dx, float dy, float dz);
    float KhoangCachO();
    float KhoangCach(const ThreeDimPoint &p3);
    bool TrungNhau(const ThreeDimPoint &p3);

};
#endif // THREEDIMPOINT_H
