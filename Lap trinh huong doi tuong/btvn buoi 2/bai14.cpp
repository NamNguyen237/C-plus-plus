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
    int dem = 1;
    int dem2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if ( (dayso[i] == dayso[j]) && (j != i))
            {
                dem++;
            }
        }
        if (dem >= 2)
        {
            dem2++;
        }
        dem = 1;
    }
    cout << "So luong cac so xuat hien 2 lan tro len trong day la: " << dem2 << endl;
    return 0;
}