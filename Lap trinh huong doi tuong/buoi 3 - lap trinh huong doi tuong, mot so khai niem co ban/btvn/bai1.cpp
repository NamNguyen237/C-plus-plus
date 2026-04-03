#include <iostream>
using namespace std;

void Nhap(int &a, int &b)
{
    cout << "\nNhap so nguyen a=";
    cin >> a;
    cout << "\nNhap so nguyen b=";
    cin >> b;
}
void HoanDoi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void HienThi(int a, int b)
{
    cout << "\na=" << a << ", b=" << b;
}

int main()
{
    int a, b;
    Nhap(a, b);
    cout << "\nTruoc khi hoan doi:";    
    HienThi(a, b);
    HoanDoi(a, b);
    cout << "\nSau khi hoan doi:";
    HienThi(a, b);
    cout << endl;
    return 0;
}