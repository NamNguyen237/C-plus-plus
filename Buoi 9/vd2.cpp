#include<iostream>
#include<cmath>
using namespace std;
bool SNT(int n) //check so nguyen to
{
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n>=2;
}
bool HoanHao(int n)
{
    int tong = 0;
    for (int i = 1; i < n; i++)
    {
        if ( n % i == 0)
            tong += i;
    }
    return ((tong == n)&&(n!=0));
}
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
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (SNT(a[i]))
            cout << "\nSo nguyen to " << a[i] << " o chi so " << i << " trong mang.";
    }
    for (int i = 0; i < n; i++)
    {
        if (HoanHao(a[i]))
            cout << "\nSo hoan hao " << a[i] << " o chi so " << i << " trong mang.";
    }
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += pow(-1,i)*a[i];
    }
    cout << "\nTong s1 la: " << s1;
    cout << "\nTong s2 la: " << s2;
    for (int i = 0; i < (n-1); i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = a[i];
            if (a[i] > a[j])
            {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nMang sau khi sort la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
