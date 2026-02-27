#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float *a, float *b)
{
    cout << "\nNhap 2 so thuc: ";
    cin >> *a >> *b;
}
void Hienthi(float a, float b)
{
    cout << "\n" << a << "*x";
    if (b>=0)
        cout << "+" << b << " = 0";
    else
        cout << b << " = 0";
}
void Hienthi2(float a, float b)
{
    cout << "\n" << a << "*x";
    cout << ((b>=0)? '+' : '-') << fabs(b) << " = 0\n";
}
void GiaiPTB1(float a, float b)
{
    if (a!=0)
    {
        cout << "\nPT co 1 nghiem x = " << -b/a;
    }
    else
    {
        if (b==0)
            cout << "\nPT vo so nghiem";
        else
            cout << "\nPT vo nghiem";
    }
}

int main()
{
    float a, b;
    Nhap(&a,&b);
    Hienthi(a,b);
    Hienthi2(a,b);
    GiaiPTB1(a,b);
}