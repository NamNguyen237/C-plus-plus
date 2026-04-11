#ifndef PHANSO_H
#define PHANSO_H
#include<bits/stdc++.h>
using namespace std;
class Phanso {
    private:
        int tu, mau;
    public:
        void Nhap();
        void Hienthi(string str = "");
        Phanso Tong(Phanso ps);
        Phanso Hieu(Phanso ps);
        Phanso Tich(Phanso ps);
        Phanso Thuong(Phanso ps);
        Phanso ToiGian();
        Phanso &Toigian(); //ham tra ve tham chieu
        void Toigian2();
        //ham thiet lap
        Phanso();
        Phanso(int i, int m);
        ~Phanso(); //ham huy thiet lap
};

#endif // PHANSO_H
