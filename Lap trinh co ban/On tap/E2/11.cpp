#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    int tong = 0;
    while (n > 0)
    {
        int temp = n % 10;
        tong += temp;
        n = n / 10;
    }
    cout << "Tong cac chu so cua so tren la: " << tong;
    return 0;
}