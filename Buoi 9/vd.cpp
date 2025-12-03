#include<iostream>
using namespace std;

int main()
{
    int a[50];
    int n;
    do{
        cout << "\nNhap n nguyen duong <= 50: ";
        cin >> n;
    } while (n<1 || n>50);
    for (int i=0; i<n; i++)
    {
        cout << "\nNhap so nguyen vao chi so " << i << " trong mang: ";
        cin >> a[i];
    }
    cout << "\nMang tren gom: ";
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    int lonNhat = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > lonNhat)
            lonNhat = a[i];
    }
    cout << "\nGia tri lon nhat trong mang la: " << lonNhat;
    cout << "\nChi so cac phan tu dat max: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == lonNhat)
            cout << i << " ";
    }
    cout << "\nThu tu cac phan tu dat max: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == lonNhat)
            cout << i+1 << " ";
    }
    return 0;
}
