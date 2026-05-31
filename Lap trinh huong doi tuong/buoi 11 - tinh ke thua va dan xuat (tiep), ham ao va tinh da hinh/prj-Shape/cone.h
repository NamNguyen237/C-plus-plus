#ifndef CONE_H
#define CONE_H
#include<iostream>
#include<cmath>
#include "threedimshape.h"
using namespace std;
class Cone : public ThreeDimShape {
    private:
        float radius;   //ban kinh
        float height;   //chieu cao
    public:
        void show();
        void init();
        float square(); //dien tich be mat hinh non: pi * r * (r + sqrt(h^2 + r^2))
        float volume(); //the tich hinh non: 1/3 * pi * r^2 * h
};
#endif // CONE_H
