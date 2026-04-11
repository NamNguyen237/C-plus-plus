#include "phanso.h"
#include<bits/stdc++.h>
using namespace std;

Phanso::Phanso() {
    cout << "\nHTL tai " << this;
    tu = 0;
    mau = 1;
}
Phanso::Phanso(int t, int m)
{
    cout << "\nHTL tai " << this;
    if (m == 0) {
        tu = t;
        mau = 1;
    }
    else if ( m > 0 ){
        tu = t;
        mau = m;
    }
    else { // m < 0
        tu = -t;
        mau = -m;
    }
}
Phanso::~Phanso()
{
    cout << "\nHHB tai " << this;
}
void Phanso::Nhap() {
    int t, m;
    do {
        cout << "\nNhap tu so: ";
        cin >> t;
        cout << "\nNhap mau so != 0: ";
        cin >> m;
    } while (m == 0);
    if ( m > 0 ){
        tu = t;
        mau = m;
    }
    else { // m < 0
        tu = -t;
        mau = -m;
    } // muc dich: luon luon dua mau so ve duong
}
void Phanso::Hienthi(string str) {
    cout << str;
    if (mau == 1 || tu == 0) cout << tu;
    else cout << tu << "/" << mau;
}
void Phanso::Toigian2() { //toi gian truc tiep
    int ucln = gcd(tu,mau);
    tu /= ucln;
    mau /= ucln;
}
Phanso Phanso::ToiGian() { //tao ra phan so moi
    int ucln = gcd(tu,mau);
    tu /= ucln;
    mau /= ucln;
    return *this;
}

Phanso & Phanso::Toigian() { //tra ve tham chieu
    int ucln = gcd(tu,mau);
    tu /= ucln;
    mau /= ucln;
    return *this;
}
Phanso Phanso::Tong(Phanso ps) {
    Phanso kq;
    kq.tu = tu * ps.mau + ps.tu * mau;
    kq.mau = mau * ps.mau;
    //kq.Toigian2();//toi gian trong ham luon
    return kq;
}
Phanso Phanso::Hieu(Phanso ps) {
    Phanso kq;
    kq.tu = tu * ps.mau - ps.tu * mau;
    kq.mau = mau * ps.mau;
    //kq.Toigian2();//toi gian trong ham luon
    return kq;
}
Phanso Phanso::Tich(Phanso ps) {
    Phanso kq;
    kq.tu = tu * ps.tu;
    kq.mau = mau * ps.mau;
    //kq.Toigian2();//toi gian trong ham luon
    return kq;
}
Phanso Phanso::Thuong(Phanso ps) {
    Phanso kq;
    kq.tu = tu * ps.mau;
    kq.mau = mau * ps.tu;
    //kq.Toigian2();//toi gian trong ham luon
    return kq;
}

