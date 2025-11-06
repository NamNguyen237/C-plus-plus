#include<iostream>
using namespace std;

int TongN(int k)
{
        int s = k*(k+1)/2;
        return s;
}
int TongBP(int k)
{
    int s = 0;
    for (int i = 1; i <= k; i++)
        s += i*i;
    return s;
}
int main()
{
    int n;
    do {
        cout << "\nNhap n nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    cout << "\nTong 1: " << TongN(n);
    cout << "\nTong 2: " << TongBP(n);
    return 0;
}
