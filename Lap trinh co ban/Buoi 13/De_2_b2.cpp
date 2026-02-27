#include<iostream>
#include<cmath>
using namespace std;
void NhapXN(float *sothuc, int *songuyen)
{
    cout << "\nNhap he so thuc x = ";
    cin >> *sothuc;
    cout << "\nNhap so nguyen n = ";
    cin >> *songuyen;
}
float TongS(int n, float x)
{
    float s = 0;
    float temp = 1;
    for (int k = 0; k < n; k++)
    {
        s += temp;
        temp = temp*(-1) * x * x / (2*k+1) / (2*k+2);
    }
    return s;
}
int main()
{
    int n;
    float x;
    NhapXN(&x, &n);
    cout << "\nTong S la: " << TongS(n, x);
    return 0;
}
