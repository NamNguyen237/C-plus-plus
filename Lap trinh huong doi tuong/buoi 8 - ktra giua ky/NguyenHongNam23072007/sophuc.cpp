#include <bits/stdc++.h>
#include "sophuc.h"
using namespace std;

Sophuc::Sophuc(float t, float a) {
    thuc = t;
    ao = a;
}

Sophuc::Sophuc(const Sophuc &sp) {
    thuc = sp.thuc;
    ao = sp.ao;
}

Sophuc::~Sophuc() {}

ostream & operator<<(ostream & out, const Sophuc &sp) {
    out << sp.thuc << " + " << sp.ao << "i";
    return out;
}

istream & operator>>(istream & in, Sophuc &sp) {
    cout << "\nNhap phan thuc: ";
    in >> sp.thuc;
    cout << "\nNhap phan ao: ";
    in >> sp.ao;
    return in;
}

Sophuc Sophuc::operator+(const Sophuc &sp) {
    return Sophuc(thuc + sp.thuc, ao + sp.ao);
}

Sophuc Sophuc::operator*(const Sophuc &sp) {
    float kq_thuc = thuc * sp.thuc - ao * sp.ao;
    float kq_ao = thuc * sp.ao + ao * sp.thuc;
    return Sophuc(kq_thuc, kq_ao);
}

//tien to
Sophuc & Sophuc::operator++() {
    thuc += 1;
    return *this;
}
