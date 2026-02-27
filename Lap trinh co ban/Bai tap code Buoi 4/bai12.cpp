#include<iostream>
using namespace std;

int main()
{
    int tu, mau, a, b, r;
    cout << "\nNhap tu so: ";
    cin >> tu;
    cout << "\nNhap mau so: ";
    cin >> mau;
    a = tu;
    b = mau;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout << "\nPhan so toi gian cua phan so " << tu << "/" << mau << " la " << tu/a << "/" << mau/a << endl;
    return 0;
}
