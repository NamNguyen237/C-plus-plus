#include<iostream>
#include<cmath>
using namespace std;

//De bai
/* Viet cac ham co tham so la 3 so thuc
tuong ung voi do dai 3 canh cua tam giac
tinh va in ra chu vi, dien tich */

float ChuVi(float a, float b, float c)
{
    float p = a + b + c;
    return p;
}
float DienTich(float a, float b, float c)
{
    float nuaCV = ChuVi(a, b, c)/2;
    float S = sqrt(nuaCV * (nuaCV - a) * (nuaCV - b) * (nuaCV - c));
    return S;
}
void hienthi(float a, float b, float c)
{
    cout << "\nDo dai 3 canh:\t"
    << a << "\t"
    << b << "\t"
    << c << endl;
}
int main()
{
    float x, y, z;
    do {
        cout << "\nNhap 3 so thuc duong cach nhau bang dau cach: ";
        cin >> x >> y >> z;
    } while ( (x <= 0) || (y <= 0) || (z <= 0) );
    hienthi(x,y,z);
    if ( (x+y > z) && (y+z > x) && (x+z > y) )
    {
        cout << "\nChu vi cua tam giac duoc tao thanh tu 3 so tren la: " << ChuVi(x,y,z);
        cout << "\nDien tich cua tam giac duoc tao thanh tu 3 so tren la: " << DienTich(x,y,z) << endl;
    }
    else
        cout << "\nBa so nhap vao khong tao thanh 1 tam giac" << endl;
    return 0;
}
