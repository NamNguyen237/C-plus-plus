#include<iostream>
#include<cmath>
using namespace std;
bool SNT(int n)
{
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n>=2;
}
int main()
{
    int n;
    do{
        cout << "\nNhap so chan nguyen duong: ";
        cin >> n;
    } while ((n <= 0) || (n % 2 != 0));
    cout << "\nCac so nguyen to cong lai bang so da cho la: ";
    for (int i = 2; i <= n/2; i++)
    {
        if (SNT(i) && SNT(n - i))
        {
            cout << "\n" << i << " " << (n - i);
        }
    }
    return 0;
}