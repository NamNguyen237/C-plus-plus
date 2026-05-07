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

    /*
    Vector Cong(const Vector &v);
    Vector Tru(const Vector &v);
    Vector TichVoHuong(const Vector &v);
    Vector NhanSoThuc(float x);
    */

    Vector operator+(const Vector &v);
    Vector operator-(const Vector &v);
    float operator*(const Vector &v);
    Vector operator*(float x);

    Vector operator/(float x);
    bool operator==(const Vector &v);
    bool operator!=(const Vector &v);

    void SapXep();
    ~Vector();

    friend Vector operator*(float x, const Vector &v);

    //chong phep gan
    Vector & operator=(const Vector &v);
    Vector & operator+=(const Vector &v);
    Vector & operator-=(const Vector &v);

    //chong phep tang-giam don vi
    //tiền tố
    Vector & operator++();

    //hậu tố
    Vector & operator++(int);

    //chồng phép hàm xuất-nhập
    //cout
    friend ostream & operator<<(ostream & out, const Vector &v);
    //cin
    friend istream & operator>>(istream & in, Vector &v);
};
#endif // VECTOR_H
