#ifndef SQUARE_H
#define SQUARE_H
#include "twodimshape.h"
class Square : public TwoDimShape {
    protected:
        float width;
    public:
        void show();
        void init();
        float perimeter();
        float square();
};
#endif // SQUARE_H
