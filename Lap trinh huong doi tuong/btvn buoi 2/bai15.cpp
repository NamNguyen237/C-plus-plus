#include<iostream>
#include<cmath>
using namespace std;
int tong_dayso(int dayso[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += dayso[i];
    }
    return sum;
}
int main()
{
    int n, x;
    int dayso[100];
    cout << "Nhap n so phan tu: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> dayso[i];
    }
    int ve_khong = abs(tong_dayso(dayso, n));
    if (ve_khong == 0) {
        cout << 0 << endl;
    } else {
        int kq = (ve_khong + x - 1) / x;
        cout << "So luong so can bu them it nhat la: " << kq << endl;
    }
    return 0;
}