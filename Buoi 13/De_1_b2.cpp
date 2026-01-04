#include<iostream>
#include<cmath>
using namespace std;

void Nhap(float *x, int *n)
{
    cout << "\nNhap he so thuc x = ";
    cin >> *x;
    do {
        cout << "\nNhap so nguyen n = ";
        cin >> *n;
    } while (*n <= 0);
}
float TongS(float x, float n)
{
    int k;
    float temp = 1;
    float S = 0;


    for (k = 0; k<n; k++)
    {
        S += temp;
        temp = temp * x/(x+1);
    }

    while (fabs(temp) >= )

    return S;
}
int main()
{
    float x;
    int n;
    Nhap(&x, &n);
    cout << "\nTong e^" << x << " = " << TongS(x,n);
    return 0;
}
