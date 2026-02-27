#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float *h, float *w)
{
    cout << "\nNhap chieu cao tinh bang met: ";
    cin >> *h;
    cout << "\nNhap can nang tinh bang kg: ";
    cin >> *w;
}
float TinhBMI(float h, float w)
{
    return w/pow(h,2);
}
int main()
{
    float h, w;
    Nhap(&h,&w);
    float kqBMI = TinhBMI(h,w);
    cout << "\nBMI: " << kqBMI;
    if (kqBMI < 18)
        cout << "\nGầy";
    else if (kqBMI <= 25)
        cout << "\nBình thường";
    else
        cout << "\nBéo";
    return 0;
}