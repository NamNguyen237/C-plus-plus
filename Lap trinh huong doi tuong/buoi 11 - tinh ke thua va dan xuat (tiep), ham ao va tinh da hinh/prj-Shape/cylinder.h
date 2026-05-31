#ifndef CYLINDER_H
#define CYLINDER_H
#include "threedimshape.h"
class Cylinder : public ThreeDimShape
{
protected:
    float height, radius;
public:
    void init();
    void show();
    float square();
    float volume();
};
#endif // CYLINDER_H
