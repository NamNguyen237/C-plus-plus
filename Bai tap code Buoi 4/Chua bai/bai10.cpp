#include<iostream>
using namespace std;

int main()
{
    int n, sum;
    do {
        cout << "\nNhap mot so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    sum = 0;
    while (n != 0)
    {
        sum = sum*10 + (n%10); // lay gia tri hang don vi
        n = n/10;
    }
    cout << "\nSo dao nguoc cua so tren la: " << sum << endl;
    return 0;
}
