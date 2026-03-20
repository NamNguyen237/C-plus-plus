#include<iostream>
using namespace std;
int main()
{
    int n, k;
    int dayso[100];
    cout << "Nhap n so phan tu: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> dayso[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (dayso[i] % k == 0)
        {
            dem++;
        }
    }
    cout << "So luong cua so chia het cho " << k << " trong day la: " << dem << endl;
    return 0;
}