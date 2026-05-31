#ifndef THREEDIMSHAPE_H
#define THREEDIMSHAPE_H
#include "shape.h"
#include <iostream>
using namespace std;
class ThreeDimShape : public Shape
{
public:
    virtual void show()
    {
        cout << "\nHinh 3 chieu";
    }
    virtual void init()=0;
    virtual float square()
    {
        return 0;
    }
    virtual float volume()
    {
        return 0;
    }
};
#endif // THREEDIMSHAPE_H

