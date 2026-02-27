#include<iostream>
using namespace std;

int main()
{
    int n, so;
    do {
        cout << "\nNhap mot so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    so = 0;
    while (n != 0)
    {
        so = so*10 + (n%10); // lay gia tri hang don vi
        n = n/10;
    }
    cout << "\nSo dao nguoc cua so tren la: " << so << endl;
    return 0;
}
