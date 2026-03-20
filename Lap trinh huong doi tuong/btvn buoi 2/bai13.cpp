#include<iostream>
using namespace std;
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
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (x <= dayso[i])
        {
            dem++;
        }
    }
    cout << "So luong cac so lon hon hoac bang " << x << " trong day la: " << dem << endl;
    return 0;
}