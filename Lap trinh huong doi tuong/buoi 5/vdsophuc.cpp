#include<iostream>
#include<cmath>
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

void Sophuc::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}
void Sophuc::Hienthi()
{
    //cout << thuc << "+" << ao << "*i";
    cout << thuc << (ao>=0? " + " : " - ") << fabs(ao) << "*i \n";

}
Sophuc Sophuc::Cong(Sophuc z) 
{
    Sophuc kq;
    kq.thuc = thuc + z.thuc; //thuc, o là tham số ngầm định lấy từ z1
    kq.ao = ao + z.ao; //z.thuc, z.ao lấy từ tham số đối tượng z đầu vào (z2)
    return kq;
}
Sophuc Sophuc::Tru(Sophuc z)
{
    Sophuc kq;
    kq.thuc = thuc - z.thuc;
    kq.ao = ao - z.ao;
    return kq;
}
int main() {
    Sophuc z1, z2;
    z1.Nhap();
    cout << "z1 = "; z1.Hienthi();
    z2.Nhap();
    cout << "z2 = "; z2.Hienthi();

    Sophuc tong;
    tong = z1.Cong(z2);
    cout << "\nz1 + z2 = ";
    tong.Hienthi();

    Sophuc hieu;
    hieu = z1.Tru(z2);
    cout << "\nz1 - z2 = ";
    hieu.Hienthi();


    return 0;
}