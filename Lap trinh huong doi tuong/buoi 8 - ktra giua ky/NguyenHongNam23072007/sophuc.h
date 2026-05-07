#ifndef SOPHUC_H
#define SOPHUC_H
#include<bits/stdc++.h>
using namespace std;

class Sophuc {
private:
    float thuc, ao;
public:
    Sophuc(float t = 0, float a = 0); //thiet lap
    Sophuc(const Sophuc &sp); //sao chep
    ~Sophuc(); //huy bo
    //cout
    friend ostream & operator<<(ostream & out, const Sophuc &sp);
    //cin
    friend istream & operator>>(istream & in, Sophuc &sp);
    Sophuc operator+(const Sophuc &sp); //cong
    Sophuc operator*(const Sophuc &sp); //nhan
    Sophuc & operator++(); //tang thuc 1 don vi
};

#endif // SOPHUC_H
