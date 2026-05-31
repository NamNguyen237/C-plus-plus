#ifndef CIRCLE_H
#define CIRCLE_H
#include "twodimshape.h"
class Circle : public TwoDimShape
{
protected:
    float radius;
public:
    void show();
    void init();
    float perimeter();
    float square();
};
#endif // CIRCLE_H
