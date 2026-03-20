#include<iostream>
using namespace std;
int main()
{
    int n, x;
    int dayso[100];
    cout << "Nhap n so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> dayso[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (dayso[i] % 4 == 0)
        {
            dem++;
        }
    }
    cout << "So luong so chia het cho 4 trong day la: " << dem << endl;
    return 0;
}