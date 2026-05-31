#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "twodimshape.h"
class Rectangle : public TwoDimShape {
    protected:
        float width;
        float height;
    public:
        void show();
        void init();
        float perimeter();
        float square();
};
#endif // RECTANGLE_H
