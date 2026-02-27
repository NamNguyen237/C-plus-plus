#include<iostream>
using namespace std;
void Nhap(int *n)
{
    cout << "\nNhap so nguyen: ";
    cin >> *n;
}
int main()
{
    int a;
    Nhap(&a);
    cout << "\na=" << a;
    return 0;
}
