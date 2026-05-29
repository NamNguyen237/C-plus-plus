#include "point.h"
#include "threedimpoint.h"
#include "colorpoint.h"
#include <iostream>
using namespace std;
//VD ve su tuong thich giua doi tuong, pointer, tham chieu lop base va lop dan xuat
int main()
{
    Point A(1,2), *ptr;
    ThreeDimPoint D(8,9,10);
    cout << "\nDiem A: " << A;
    cout << "\nDiem D: " << D;
    A = D;
    cout << "\nDiem A sau khi sao chep D: " << A;
    ptr = &A;
    ptr->Show("\nptr tro vao A: ");
    ptr = &D;
    ptr->Show("\nptr tro vao D: ");
    
    Pointer &rp = D;
    rp.Show("\nrp tro vao D: ");
    D.Show("\nD: ");
    return 0;
}
/*
int main()
{
    /*
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
    
    ColorPoint C(1,2,"Xanh La Cay");
    C.Xuat("C");
    C.Nhap("C");
    C.Xuat("C");
    C.DatMau("Vang");
    cout << "\nMau cua C hien tai la: ";
    cout << C.LayMau();
    ColorPoint D(C);
    D.Xuat("D");
    ColorPoint E;
    E = C;
    cout << "\nE: " << E;
    cout << "\nNhap thuoc tinh cho E: ";
    cin >> E;
    cout << "\nE sau khi nhap thuoc tinh: \n" << E;
    
    Point A;
    Point B(3, 4);
    A.Show("A");
    B.Show("B");
    A = B;
    //A.Show("A sau khi sao chep B");
    cout << "\nA sau khi sao chep B\n";
    cout << A;
    cout << "\nNhap thuoc tinh cho A: ";
    cin >> A;
    B = A;
    //B.Show("B sau khi sao chep A");
    cout << "\nB sau khi sao chep A\n";
    cout << B ;
    
    
    ThreeDimPoint D(1,2,3);
    cout << "\nDiem D: " << D;
    cout << "\nNhap thuoc tinh cho D: ";
    cin >> D;

    ThreeDimPoint E(D);
    cout << "\nDiem E: " << E;

    ThreeDimPoint F;
    F = D;
    cout << "\nDiem F: " << F;
    

    return 0;
}
*/
/*
int main()
{

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
