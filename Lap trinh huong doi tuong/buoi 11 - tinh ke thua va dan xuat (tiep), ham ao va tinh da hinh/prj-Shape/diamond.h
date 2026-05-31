#ifndef DIAMOND_H
#define DIAMOND_H
#include<iostream>
#include<cmath>
#include "twodimshape.h"
using namespace std;

class Diamond : public TwoDimShape {
    protected:
        float d1;
        float d2;
        float width;
    public:
        void show();
        void init();
        float perimeter();
        float square();
};

#endif // DIAMOND_H

