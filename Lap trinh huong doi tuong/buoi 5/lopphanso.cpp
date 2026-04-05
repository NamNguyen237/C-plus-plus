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
};
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
    tu =/ ucln;
    mau =/ ucln;
}
Phanso Phanso::ToiGian() { //tao ra phan so moi
    int ucln = gcd(tu,mau);
    tu =/ ucln;
    mau =/ ucln;
    return *this;
}

Phanso & Phanso::Toigian() { //tra ve tham chieu
    int ucln = gcd(tu,mau);
    tu =/ ucln;
    mau =/ ucln;
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

int main()
{
    Phanso ps1, ps2;
    ps1.Nhap();
    ps1.Hienthi("ps1 = "); cout << endl;
    ps2.Nhap();
    ps2.Hienthi("ps2 = "); cout << endl;

    Phanso tong = ps1.Tong(ps2);
    tong.Hienthi("\nps1 + ps2 = ");
    tong.ToiGian().Hienthi("\nps1 + ps2 toi gian = "); cout << endl;

    Phanso hieu = ps1.Hieu(ps2);
    hieu.Hienthi("\nps1 - ps2 = ");
    hieu.ToiGian().Hienthi("\nps1 - ps2 toi gian = "); cout << endl;

    Phanso tich = ps1.Tich(ps2);
    tich.Hienthi("\nps1 * ps2 = ");
    tich.ToiGian().Hienthi("\nps1 * ps2 toi gian = "); cout << endl;

    Phanso thuong = ps1.Thuong(ps2);
    thuong.Hienthi("\nps1 / ps2 = ");
    thuong.ToiGian().Hienthi("\nps1 / ps2 toi gian = "); cout << endl;

    return 0;
}