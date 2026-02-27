#include<iostream>
#include<cmath>
using namespace std;

/*
Ham kiem tra so nguyen to
Ham dang bool True/false
*/

bool KTNT(int n)
{
    int i;
    for (i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0)
            return false;
    return n>1;
}
int main()
{
    int n;
    cout << "\nNhap n can kiem tra SNT: ";
    cin >> n;
    if (KTNT(n))
        cout << "\nDay la so nguyen to." << endl;
    else
        cout << "\nDay khong la so nguyen to." << endl;
    cout << "\nCac so nguyen to <= 1000:";
    for (int i = -10; i <= 1000; i++)
        if (KTNT(i))
            cout << "\t" << i;
    cout << endl;
    return 0;
}
