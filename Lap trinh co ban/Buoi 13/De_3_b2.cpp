#include<iostream>
#include<cmath>
using namespace std;

bool KTNT(int n)
{
    for (int i = 2; i <= (int)sqrt(n) + 1; i++)
        if (n % i == 0)
            return false;
    return (n > 1);
}

int main()
{
    int n; 
    cout << "\nNhap n = ";
    cin >> n;
    cout << "\n" << (int)sqrt(n);
    int i;
    cout << "\nCac so nguyen to <=" << n << endl;
    for (i = 0; i <= n; i++)
        if (KTNT(i) == true)
            cout << i << " ";
    int demNT = 0;
    int k = 2;
    cout << "\n" << n << " so nguyen to dau tien la: ";
    while (demNT < n)
    {
        if (KTNT(k))
        {
            cout << k << " ";
            demNT++;
        }
        k++;
    }
}