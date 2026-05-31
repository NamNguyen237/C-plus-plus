#ifndef BOX_H
#define BOX_H
#include<iostream>
#include "threedimshape.h"
using namespace std;
class Box : public ThreeDimShape {
    private:
        float length;  //chieu dai
        float width;   //chieu rong
        float height;  //chieu cao
    public:
        void show();
        void init();
        float square();
        float volume();
};
#endif // BOX_H
