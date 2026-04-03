/*
cấp phát, nhập và hiển thị dữ liệu vào bộ nhớ động cho:
- 1 dãy số thức gồm n phần tử
- tính và hiển thị tổng các phần tử trong mảng
- tìm và hiển thị phần tử lớn nhất, phần tử nhỏ nhất cùng vị trí của chúng
- tính tổng S = a[0] - a[1] + a[2] - a[3] + ... + (-1)^n * a[n-1]
*/
#include<iostream>
using namespace std;
void Nhap(float *a, int n)
{
    cout << "\nNhap " << n << " so thuc: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void Hienthi(float *a, int n)
{
    cout << "\nHien thi mang: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        //cout << *(a+i) << " ";
}
float TongPT(float *a, int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}
void Max(float *a, int n)
{
    float lonnhat = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > lonnhat)
            lonnhat = a[i];
    }
    cout << "\nMax = " << lonnhat;
    cout << "\nCac vi tri dat max: ";
    for (int i = 0; i < n; i++)
        if (a[i] == lonnhat)
            cout << i+1 << " ";
}
void Min(float *a, int n)
{
    float benhat = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < benhat)
            benhat = a[i];
    }
    cout << "\nMin = " << benhat;
    cout << "\nCac vi tri dat min: ";
    for (int i = 0; i < n; i++)
        if (a[i] == benhat)
            cout << i+1 << " ";
}
float TongS(float *a, int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = ( (i%2 == 0)? 1 : -1);
        s += temp * a[i];
    }
    return s;
}

int main()
{
    float *arr;
    int n;
    cout << "\nNhap n = ";
    cin >> n;
    arr = new float[n]; // cap phat bo nho dong
    Nhap(arr,n);
    Hienthi(arr,n);
    cout << "\nTong cac GT trong mang: " << TongPT(arr,n);
    Max(arr,n);
    Min(arr,n);
    cout << "\nTong S = " << TongS(arr,n);
    delete arr; // giai phong bo nho dong
    return 0;
}
