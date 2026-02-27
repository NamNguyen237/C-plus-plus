#include<iostream>
#include<cmath>
using namespace std;

void NhapMT(float a[][30], int m, int n)
{
    int i, j;
    cout << "\nNhap cac phan tu trong mang: \n";
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            cin >> a[i][j];
}
void HienthiMT(float a[][30], int m, int n)
{
    int i, j;
    cout << "\nCac phan tu trong ma tran:\n";
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
void TongMT(float a[][30], float b[][30], float c[][30], int m, int n)
{
    int i, j;
    for (i=0; i<m; i++)
        for (j=0; j<m; j++)
            c[i][j] = a[i][j] + b[i][j];
    cout <<

}
int main()
{
    float A[20][30];
    float B[20][30];
    int m, n;
    cout << "\nNhap so hang va so cot: ";
    cin >> m >> n;
    cout << "\nNhap ma tran A: ";
    NhapMT(A, m, n);
    HienthiMT(A, m, n);
    cout << "\nNhap ma tran B: ";
    NhapMT(B, m, n);
    HienthiMT(B, m, n);

    float tong[20][30];
    return 0;
}
