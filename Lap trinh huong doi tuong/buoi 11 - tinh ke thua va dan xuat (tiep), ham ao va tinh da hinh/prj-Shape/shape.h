#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespaces std;
class Shape{
public:
    virtual void show() = 0;
    virtual void init() = 0;
    virtual float square()
    {
        return 0;
    }
    virtual float perimeter()
    {
        return 0;
    }

};
#endif // SHAPE_H
