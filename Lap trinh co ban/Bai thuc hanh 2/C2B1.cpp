#include<iostream>
using namespace std;

int main()
{
    float a, b, c, d, m, n;
    cout << "Nhap 4 so thuc lien tiep cach nhau boi dau cach: ";
    cin >> a >> b >> c >> d;
    m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    if (d > m)
        m = d;
    n = a;
    if (b < n)
        n = b;
    if (c < n)
        n = c;
    if (d < n)
        n = d;
    cout << "\nGia tri lon nhat la: " << m << endl;
    cout << "\nGia tri nho nhat la: " << n << endl;
    return 0;
}
