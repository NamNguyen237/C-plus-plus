#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H
#include "shape.h"
class TwoDimShape : public Shape {
public:
    virtual void show() {
        cout << "\nHinh 2 chieu";
    }
    virtual void init() = 0;
    virtual float square() {
        return 0;
    }
    virtual float perimeter() {
        return 0;
    }

};
#endif // TWODIMSHAPE_H
