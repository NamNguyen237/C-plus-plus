#include<iostream>
#include<cmath>
using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        {
        if (n % i == 0)
            return false;
        }
    return true;
}

int main()
{
    int so;
    cout << "\nNhap so nguyen duong: ";
    cin >> so;
    cout << "\nNhung so nguyen to be hon n la: ";
    for (int i = 2; i < so; i++)
    {
        if (laSoNguyenTo(i))
            cout << i << " ";
    }
    return 0;
}
