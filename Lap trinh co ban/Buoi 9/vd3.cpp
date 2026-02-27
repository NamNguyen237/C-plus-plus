#include<iostream>

using namespace std;
int main()
{
    int a[30];
    int n;
    do{
        cout << "\nNhap n nguyen duong <= 30: ";
        cin >> n;
    } while (n<1 || n>30);
    for (int i=0; i<n; i++)
    {
        cout << "\nNhap so nguyen vao chi so " << i << " trong mang: ";
        cin >> a[i];
    }
    cout << "\nCac phan tu la so chan trong mang cung chi so cua chung la: ";
    for (int i=0; i<n;i++)
        if (a[i] % 2 == 0)
            cout << "\nPhan tu: " << a[i] << " - Chi so: " << i;
    int soSoKhong = 0;
    for (int i=0; i<n;i++)
        if (a[i] == 0)
            soSoKhong += 1;
    cout << "\nSo phan tu co gia tri bang 0 la: " << soSoKhong;
    int soSoChiaHetHaiBa = 0;
    for (int i=0; i<n;i++)
        if ((a[i] % 2 == 0) && (a[i] % 3 == 0))
            soSoChiaHetHaiBa += 1;
    cout << "\nSo phan tu chia het cho ca 2 va 3 la: " << soSoChiaHetHaiBa;

    return 0;
}
