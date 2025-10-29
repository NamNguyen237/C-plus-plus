#include<iostream>
using namespace std;

int main()
{
    int n, tong;
    do {
        cout << "\nNhap mot so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    tong = 0;
    while (n != 0)
    {
        tong = tong + n%10; // lay gia tri hang don vi
        n = n/10;
    }
    cout << "\nTong cac chu so cua so tren la: " << tong << endl;
    return 0;
}
