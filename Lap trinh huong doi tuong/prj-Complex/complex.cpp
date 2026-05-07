#include<bits/stdc++.h>
#include "complex.h"

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
Sophuc Sophuc::operator+(Sophuc z) //cong
{
    Sophuc kq;
    kq.thuc = thuc + z.thuc; //thuc, o là tham số ngầm định lấy từ z1
    kq.ao = ao + z.ao; //z.thuc, z.ao lấy từ tham số đối tượng z đầu vào (z2)
    return kq;
}
Sophuc Sophuc::operator-(Sophuc z) //tru
{
    Sophuc kq;
    kq.thuc = thuc - z.thuc;
    kq.ao = ao - z.ao;
    return kq;
}
Sophuc Sophuc::operator*(Sophuc z){
    //cong thuc: (ac - bd) + (ad + bc)i
    //voi a, b la thuc, ao cua z1 va c, d la thuc, ao cua z2
    Sophuc kq;
    kq.thuc = (thuc*z.thuc - ao*z.ao);
    kq.ao = (thuc*z.ao + ao*z.thuc);
    return kq;
}
Sophuc Sophuc::operator/(Sophuc z){
    //cong thuc: (ac + bd) + (bc - ad)i / ( c^2 + d^2)
    Sophuc kq;
    float mau = (z.thuc*z.thuc) + (z.ao * z.ao);
    kq.thuc = (thuc*z.thuc + ao*z.ao) / mau;
    kq.ao = (ao*z.thuc - thuc*z.ao) / mau;
    return kq;
}
