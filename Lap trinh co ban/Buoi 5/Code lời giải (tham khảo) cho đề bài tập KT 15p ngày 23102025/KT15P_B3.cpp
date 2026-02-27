#include<iostream>
using namespace std;
/*
Tinh tong S3 = 1/2 + 2/3 + ... + (n-1)/n
*/
int main()
{
    int n, i;
    float s3 = 0;
    do {
        cout << "Nhap n>1: ";
        cin >> n;
    } while (n<=1);
    for (i=1; i<n; i++)
    {
        s3 = s3 + (float)i/(i+1);
    }
    cout << "\nTong s3 = " << s3;
    return 0;
}
