#include<iostream>
using namespace std;

int UCLN(int m, int n)
{
    while (n != m)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return n;
}
int BCNN(int m, int n)
{
    return (m*n)/UCLN(m,n);
}
int main()
{
    int a, b;
    cout << "\nNhap 2 nguyen duong: ";
    cin >> a >> b;
    cout << "\nUCLN(" << a << "," << b << ") = " << UCLN(a,b);
    cout << "\nBCNN(" << a << "," << b << ") = " << BCNN(a,b) << endl;
    return 0;
}
