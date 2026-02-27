#include<iostream>
using namespace std;
int main()
{
    int n, i;
    float s1, s2, s3;
    s1 = s2 = s3 = 0;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    } while (n <= 0);
    for (i = 1; i <= n; i++)
    {
        s1 = s1 + i;
        s2 = s2 + (i*i);
        s3 = s3 + 1.0/i;
    }
    cout << "Tong day so S1 la = " << s1 << endl;
    cout << "Tong day so S2 la = " << s2 << endl;
    cout << "Tong day so S3 la = " << s3 << endl;
    return 0;
}
