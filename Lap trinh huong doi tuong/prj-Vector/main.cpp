#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector v, u(10);
    v.Hienthi("v = ");
    v.Nhap("v");
    v.Hienthi("v = ");

    u.Hienthi("u = ");
    u.Nhap("u");
    u.Hienthi("u = ");

    Vector p = u;//sd HTL sao chep
    p.Hienthi("p = ");

    Vector q(v); //sd HTL sao chep
    q.Hienthi("q = ");

    float chuan_v = v.Tinhchuan();
    cout << "Chuan cua vector v = " << chuan_v;

    Vector tong1 = q.Cong(v);
    tong1.Hienthi("q + v = ");

    Vector tong2 = u.Cong(v);
    tong2.Hienthi("u + v = ");

    return 0;
}
