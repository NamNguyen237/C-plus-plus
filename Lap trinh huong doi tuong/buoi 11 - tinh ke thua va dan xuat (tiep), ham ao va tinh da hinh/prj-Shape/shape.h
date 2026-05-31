#ifndef SHAPE_H
#define SHAPE_H
class Shape{
public:
    virtual ~Shape() {}
    virtual void show() = 0;
    virtual void init() = 0;
    virtual float square()
    {
        return 0;
    }
};
#endif // SHAPE_H
