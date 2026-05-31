#ifndef CUBE_H
#define CUBE_H
#include<iostream>
#include<cmath>
#include "threedimshape.h"
using namespace std;
class Cube : public ThreeDimShape {
    private:
        float width;
    public:
        void show();
        void init();
        float square();
        float volume();
};
#endif // CUBE_H

