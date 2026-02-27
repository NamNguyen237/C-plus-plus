#include<iostream>
using namespace std;
/*
Tinh tong S1 = 1*2 + 2*3 + ... + (n-1)n
*/
int main()
{
    int n, i;
    long s1 = 0;
    do {
        cout << "Nhap n>1: ";
        cin >> n;
    } while (n<=1);
    for (i=1; i<n; i++)
    {
        s1 = s1 + i*(i+1);
    }
    cout << "\nTong s1 = " << s1;
    return 0;
}
