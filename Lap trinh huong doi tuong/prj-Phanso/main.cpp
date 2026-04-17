#include <iostream>
#include "phanso.h"
using namespace std;

int main()
{
    Phanso ps1; //tu chay ham thiet lap khi khai bao doi tuong cua class
    ps1.Hienthi("\nps1 = "); cout << endl;
    ps1.Nhap();
    ps1.Hienthi("\nps1 = "); cout << endl;

    Phanso ps2(3,4);
    ps2.Hienthi("\nps2 = "); cout << endl;
    ps2.Nhap();
    ps2.Hienthi("\nps2 = "); cout << endl;


    //Phanso tong = ps1.Tong(ps2);
    Phanso tong = ps1 + ps2;
    tong.Hienthi("\nps1 + ps2 = ");
    tong.ToiGian().Hienthi("\nps1 + ps2 toi gian = "); cout << endl;

    //Phanso hieu = ps1.Hieu(ps2);
    Phanso hieu = ps1 - ps2;
    hieu.Hienthi("\nps1 - ps2 = ");
    hieu.ToiGian().Hienthi("\nps1 - ps2 toi gian = "); cout << endl;

    //Phanso tich = ps1.Tich(ps2);
    Phanso tich = ps1 * ps2;
    tich.Hienthi("\nps1 * ps2 = ");
    tich.ToiGian().Hienthi("\nps1 * ps2 toi gian = "); cout << endl;

    //Phanso thuong = ps1.Thuong(ps2);
    Phanso thuong = ps1/ps2;
    thuong.Hienthi("\nps1 / ps2 = ");
    thuong.ToiGian().Hienthi("\nps1 / ps2 toi gian = "); cout << endl;

    if(ps1==ps2) cout << "\nps1 == ps2";
    else cout << "\nps1 != ps2";

    if(ps1>=ps2) cout << "\nps1 >= ps2";
    else cout << "\nps1 < ps2";

    return 0;
}

