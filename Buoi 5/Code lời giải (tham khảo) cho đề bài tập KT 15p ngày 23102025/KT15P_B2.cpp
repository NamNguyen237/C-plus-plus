#include<iostream>
using namespace std;
/*
Tinh tong S2 = 1*2*3 + 2*3*4 + ... + (n-2)(n-1)n
*/
int main()
{
    int n, i;
    long s2 = 0;
    do {
        cout << "Nhap n>3: ";
        cin >> n;
    } while (n<=3);
    for (i=1; i<n-1; i++)
    {
        s2 = s2 + i*(i+1)*(i+2);
    }
    cout << "\nTong s2 = " << s2;
    return 0;
}
