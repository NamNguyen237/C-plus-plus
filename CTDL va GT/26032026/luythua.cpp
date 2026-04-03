#include<iostream>
using namespace std;
int luythua1(int b, int n)
{
    if (n == 0) return 1;
    if (n == 1) return b;
    int kq = luythua1(b, n-1);
    cout << "Lan thu " << n-1 << " kq = " << kq << "\n";
    return b * kq;
}
int luythua2(int b, int n)
{
    if (n == 0) return 1;
    if (n == 1) return b;
    int kq = luythua2(b, n/2);
    int so = ( (n-1)/2 ? (n-1)/2 : ((n-1)/2+1) );
    cout << "De quy Lan thu " << so << " kq = " << kq << "\n";
    return ( (n%2 == 0) ? (kq*kq) : (kq*kq*b) );
}
void luythua(int b, int n, int &kq, int &solan)
{
    if (n == 0) {
        kq = 1;
        solan = 0;
    }
    if ( n > 0 )
    {
        int tg = luythua(b, n/2, tg, solan);
        kq = ( (n%2 == 0) ? (tg*tg) : (tg*tg*b) );
        solan++;
    }
}
int main()
{
    int b, n;
    b = 2;
    n = 5;
    luythua1(b,n);
    luythua2(b,n);
    return 0;
}