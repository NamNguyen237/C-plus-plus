#include<iostream>

using namespace std;

void NhapN(int *so)
{
    do {
        cout << "\nNhap so nguyen duong N: ";
        cin >> *so;
    } while (*so<0);
}
bool HoanHao(int n)
{
    int tong = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            tong += i;
    return ((tong == n) && (n > 1));
}
int main()
{
    int n;
    NhapN(&n);
    if (HoanHao(n)) cout << "\nn la so hoan hao.\n";
    else cout << "\nn khong la so hoan hao.\n";
    cout << "Cac so hoan hao < 10000 la:\n";
    for (int i = 1; i < 10000; i++)
        if (HoanHao(i))
            cout << i << " ";
    return 0;
}
