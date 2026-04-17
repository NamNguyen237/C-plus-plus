#ifndef COMPLEX_H
#define COMPLEX_H
#include<bits/stdc++.h>
using namespace std;

class Sophuc {
    private:
        float thuc, ao;
    public:
        void Nhap();
        void Hienthi();
        Sophuc Cong(Sophuc z);
        Sophuc Tru(Sophuc z);
        Sophuc Nhan(Sophuc z);
        Sophuc Chia(Sophuc z);

};

#endif // COMPLEX_H

