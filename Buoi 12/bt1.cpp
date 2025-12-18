#include <iostream>
using namespace std;
void NhapMT(float a[][20], int m, int n)
{
    cout << "\nNhap ma tran gom " << m << " hang "
    << n << " cot ("<<m<<"x"<<n<<"): ";
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        cin >> a[i][j];
}
void HienthiMT(float a[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
    for (int j = 0; j < n; j++)
        cout << a[i][j] << " ";
    cout << "\n";
    }
}


int main()
{
    int m, n;
    float A[20][20];
    cout << "\nNhap so hang va so cot m va n: ";
    cin >> m >> n;
    NhapMT(A,m,n);
    cout << "\nMa tran vua nhap la: \n";
    HienthiMT(A,m,n);
}
