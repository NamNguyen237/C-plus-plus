#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<iostream>
#include "twodimshape.h"
class Triangle : public TwoDimShape {
    protected:
        float a;
        float b;
        float c;
    public:
        void show();    
        void init();
        float perimeter();
        float square();
};
#endif // TRIANGLE_H
