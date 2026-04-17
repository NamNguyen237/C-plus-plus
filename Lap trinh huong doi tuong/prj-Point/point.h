#ifndef POINT_H
#define POINT_H

#include<bits/stdc++.h>
using namespace std;


class Point{
private:
    float x, y;
public:
    Point(float a=0, float b=0);
    Point(const Point &p);
    ~Point();
    void Init(const char *s);
    void Show(const char *s);
    void Move(float dx, float dy);
    float Distance(); //KC toi O(0;0)
    float Distance(const Point &p);
    bool coincide(const Point &p); //ham kiem tra 2 diem trung nhau
    friend bool coincide(const Point &p1, const Point &p2); //ham tu do la ban cua lop point
    /*
    friend bool Vector::coincide(const Point &p1; const Point &p2) //ham tu lop vector la ban cua lop point
    friend class Vector; //toan bo thanh phan cua lop vector la ban cua lop point
    //ham friend la khai bao 1 chieu
    */


};
#endif // POINT_H


