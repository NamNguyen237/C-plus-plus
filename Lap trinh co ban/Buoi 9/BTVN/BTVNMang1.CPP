#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a[20];
    int n;
    do {
        cout << "\nNhap so n (0 < n <= 30): ";
        cin >> n;
    } while( n<1 || n > 30);
    for (int i=0; i<n; i++)
    {
        cout << "\nNhap so thuc vao chi so " << i << " trong mang: ";
        cout << "\na[" << i << "] = ";
        cin >> a[i];
    }
    cout << "\nMang da nhap la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    float lonNhat = a[0], nhoNhat = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > lonNhat)
            lonNhat = a[i];
        if (a[i] < nhoNhat)
            nhoNhat = a[i];
    }
    cout << "\nGia tri lon nhat co trong mang la: " << lonNhat;
    cout << "\nGia tri nho nhat co trong mang la: " << nhoNhat;
    float s1 = 0, s2 = 0, s3 = 0;
    float dem = 1;
    for (int i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += (dem*a[i]);
        s3 += pow(a[i],2);
        dem = -(dem);   
    }
    cout << "\nGia tri tong S1 la: " << s1;
    cout << "\nGia tri tong S2 la: " << s2;
    cout << "\nGia tri tong S3 la: " << s3;

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = i+1; j < n; j++)
        {
            float temp = a[i];
            if (a[i] > a[j])
            {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nMang sau khi sort tang dan la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = i+1; j < n; j++)
        {
            float temp = a[i];
            if (a[i] < a[j])
            {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nMang sau khi sort giam dan la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
