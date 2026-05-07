#include<bits/stdc++.h>
#include "complex.h"
using namespace std;

int main() {
    Sophuc z1, z2;
    z1.Nhap();
    cout << "z1 = "; z1.Hienthi();
    z2.Nhap();
    cout << "z2 = "; z2.Hienthi();

    Sophuc tong;
    //tong = z1.Cong(z2);
    tong = z1 + z2;
    cout << "\nz1 + z2 = ";
    tong.Hienthi();

    Sophuc hieu;
    //hieu = z1.Tru(z2);
    hieu = z1 - z2;
    cout << "\nz1 - z2 = ";
    hieu.Hienthi();

    Sophuc tich, thuong;
    tich = z1 * z2;
    cout << "\nz1*z2 = "; tich.Hienthi();
    thuong = z1 / z2;
    cout << "\nz1/z2 = "; thuong.Hienthi();

    return 0;
}
