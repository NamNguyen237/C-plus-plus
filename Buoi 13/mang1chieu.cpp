#include<iostream>

using namespace std;

void Nhap(float a[], int n)
{
    int i = 0;
    cout << "\nNhap " << n << " so thuc: ";
    while (i<n)
    {
        cin >> a[i];
        i++;
    }
}
void Hienthi(float a[], int n)
{
    cout << "\nCac PT trong mang:\n";
    int i = 0;
    while (i<n)
    {
        cout << a[i] << " ";
        i++;
    }
}
void TongAm(float a[], int n)
{
    float ta = 0;
    int i = 0;
    while (i<n)
    {
        if (a[i] < 0) ta += a[i];
        i++;
    }
    cout << "\nTong cac so am la: " << ta;
}
void TongTBDuong(float a[], int n)
{
    float td = 0; // tinh tong cac so duong
    int sd = 0; // dem slg so duong
    int i = 0;
    while (i < n)
    {
        if (a[i] > 0)
        {
            sd++;
            td += a[i];
        }
        i++;
    }
    if (sd > 0)
    {
        cout << "\nTong cac so duong: " << td;
        cout << "\nTBC cac so duong: " << td/sd;
    }
    else
        cout << "\nKhong co so duong trong mang.";
}
int main()
{
    float array[100];
    int n;
    cout << "\nNhap so phan tu cua mang n=";
    cin >> n;
    Nhap(array,n);
    Hienthi(array,n);
    TongAm(array, n);
    TongTBDuong(array, n);
    return 0;
}