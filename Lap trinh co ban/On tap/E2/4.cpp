#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;

    if (n < 2)
        cout << "Khong phai so nguyen to.\n";
    else
        for (int i = 2; i <= (int)sqrt(n); i++)
        {
            if (n % i == 0)
                cout << "Khong phai so nguyen to.\n";
                return 0;
        }
    cout << "La so nguyen to.\n";
    return 0;
}