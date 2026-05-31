#ifndef SPHERE_H
#define SPHERE_H
#include<iostream>
#include<cmath>
#include "threedimshape.h"
using namespace std;
class Sphere : public ThreeDimShape {
    private:
        float radius;
    public:
        void show();
        void init();
        float square();
        float volume();
};
#endif // SPHERE_H