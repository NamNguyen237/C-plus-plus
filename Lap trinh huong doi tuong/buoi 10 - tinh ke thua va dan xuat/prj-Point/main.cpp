#include "point.h"
#include "threedimpoint.h"
#include "colorpoint.h"
#include <iostream>
using namespace std;
int main()
{
    Point A;
    A.Show("A");
    A.Init("A");
    A.Show("A");

    ThreeDimPoint T3D(1,2,3);
    T3D.Xuat("T3D");
    T3D.Nhap("T3D");
    T3D.Xuat("T3D");

    cout << "Khoang cach toi O(0,0,0): ";
    cout << T3D.KhoangCachO();

    ThreeDimPoint p3(4,5,6);
    cout << "Khoang cach toi ";
    p3.Xuat(""); cout <<": ";
    cout << T3D.KhoangCach(p3);

    ColorPoint C(1,2,"Xanh");
    C.Xuat("C");
    C.Nhap("C");
    C.Xuat("C");
    C.DatMau("Xanh Da Troi");
    cout << "\nMau cua C hien tai la: ";
    cout << C.LayMau();
    return 0;
}
/*
int main()
{
    Point A, B(3, 4);
    A.Show("A");
    B.Show("B");
    A.Init("A");
    A.Show("A");
    //goi ham thanh phan cua lop
    if (A.coincide(B) == true) cout << "\n2 diem trung nhau";
    else cout << "\n2 diem khong trung nhau";

    //goi ham tu do
    if (coincide(A,B)) cout << "\n2 diem trung nhau";
    else cout << "\n2 diem khong trung nhau";

    A.Distance();
    A.Distance(B);

    return 0;
}*/
