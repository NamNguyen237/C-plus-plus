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
    double S = 1;
    double temp = 1;
    for (int i = 2; i <= (2*n); i = i + 2)
    {
        temp = temp*(-pow(x,2)/((i-1)*i));
        S += temp;
    }
    return S;
}
int main()
{
    int n;
    float x;
    NhapXN(&x, &n);
    cout << "\nTong S la: " << TongS(n, x);
    return 0;
}
