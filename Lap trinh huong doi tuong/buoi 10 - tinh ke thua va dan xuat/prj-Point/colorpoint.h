#ifndef COLORPOINT_H
#define COLORPOINT_H
#include<iostream>
#include "point.h"
using namespace std;
class ColorPoint : public Point {
private:
    char *color;
public:
    ColorPoint(float a = 0, float b = 0, const char *c = "Den");
    ColorPoint(const ColorPoint &p);
    ~ColorPoint();
    void Nhap(const char *s);
    void Xuat(const char *s);
    void DatMau(const char *c);
    char* LayMau();
    float KhoangCachO();
    float KhoangCach(const ColorPoint &p2);
    ColorPoint & operator=(const ColorPoint &p);
};
#endif // COLORPOINT_H
