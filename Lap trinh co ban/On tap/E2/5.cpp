#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    int snt[n+1];
    for (int i = 1; i <= n; i++)
        snt[i] = 1;
    snt[0] = snt[1] = 0;
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if(snt[i] == 1)
        {
            for (int j = i*i; j <= n; j += i)
                snt[j] = 0;
        }
    }
    cout << "Cac so nguyen to nho hon n: ";
    for (int i = 1; i <= n; i++)
    {
        if (snt[i] == 1)
            cout << i << " ";
    }
    return 0;
}