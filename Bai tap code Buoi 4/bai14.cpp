#include<iostream>
using namespace std;

int main()
{
    float x;
    int n;
    cout << "\nNhap so thuc x = ";
    cin >> x;
    do{
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);
    float S = 1;
    int i, y;
    float j, z;
    for (i = 1; i <= n; i++)
    {
        j = x**i; // x^i
        for (y = 1; y <= i; y++)
        {
            z = z*y; // giai thua
        }
        S = S + float(j/z)
    }
    return 0;
}
