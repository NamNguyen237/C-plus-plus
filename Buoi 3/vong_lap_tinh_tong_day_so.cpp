#include<iostream>
using namespace std;
int main()
{
    int n, s1, c;
    cout << "Nhap n: ";
    cin >> n;
    while (n<=0)
    {
        cout << "\nNhap lai n: ";
        cin >> n;
    }
    s1 = 0;
    c = 1;
    while (c <= n)
    {
        s1 = s1 + c;
        c = c + 1;
    }
    cout << s1;
}
