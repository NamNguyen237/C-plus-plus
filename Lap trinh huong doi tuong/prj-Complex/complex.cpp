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
