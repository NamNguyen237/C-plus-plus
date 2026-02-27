#include<iostream>
using namespace std;
int main()
{
    int n;
    float S3;
    S3 = 0;

    do{
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);

    int i;
    for (i = 1; i < n; i++)
    {
        S3 = S3 + float(i)/(i+1);
    }
    cout << "\nGia tri cua S3 la: " << S3 << endl;
    return 0;
}
