#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector v, u(10);
    //v.Hienthi("v = ");
    cout << "\nv = " << v;
    //v.Nhap("v");
    cin >> v;
    //v.Hienthi("v = ");
    cout << "\nv = " << v;

    u.Hienthi("u = ");
    u.Nhap("u");
    u.Hienthi("u = ");

    Vector p = u;//sd HTL sao chep
    p.Hienthi("p = ");

    Vector q(v); //sd HTL sao chep
    q.Hienthi("q = ");


    /*
    float chuan_v = v.Tinhchuan();
    cout << "Chuan cua vector v = " << chuan_v;

    Vector tong1 = q + v; //q.Cong(v);
    tong1.Hienthi("q + v = ");

    Vector tong2 = u + v; //u.Cong(v);
    //se ko in ra gi do sai kich co vector
    tong2.Hienthi("u + v = ");

    float tichvohuong = q * v;
    cout << "\nTich vo huong q * v = " << tichvohuong << endl;

    float tichvohuong2 = q * u;
    cout << "\nq * u = " << tichvohuong2 << endl;

    Vector nhansothuc = q * 3.5;
    nhansothuc.Hienthi("Vector q nhan so thuc 3.5 = ");

    Vector nhansothuc2 = 3.5 * q;
    nhansothuc2.Hienthi("3.5 * q = ");

    Vector chiasothuc = q / 3.5;
    chiasothuc.Hienthi("Vector q chia so thuc 3.5 = ");

    if (q == v) cout << "2 vector q va v bang nhau"; else cout << "2 vector q va v khac nhau";

    if (q != u) cout << "2 vector q va u khac nhau"; else cout << "2 vector q va u bang nhau";
    */

    //chồng hàm gán
    u = v;
    u.Hienthi("u sau khi gan u = v: ");
    v.Hienthi("v = ");


    //chồng hàm tăng-giảm
    Vector x, y;
    x = ++u; //tiền tố
    u.Hienthi("u = ");
    x.Hienthi("x = ");

    y = v++; //hậu tố
    v.Hienthi("v = ");
    y.Hienthi("y = ");

    return 0;
}
