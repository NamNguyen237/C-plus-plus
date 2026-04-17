#ifndef VECTOR_H
#define VECTOR_H

#include<bits/stdc++.h>
class Vector {
private:
    int n;
    float *a;
public:
    Vector();
    Vector(int k);// tao vector kich thuoc k
    Vector(const Vector &v); //Ham thiet lap sao chep
    void Nhap(char *s);
    void Hienthi(char *s);
    float Tinhchuan();
    Vector Cong(const Vector &v);
    Vector Tru(const Vector &v);
    Vector TichVoHuong(const Vector &v);
    Vector NhanSoThuc(float x);
    void SapXep();
    ~Vector();
};
#endif // VECTOR_H
