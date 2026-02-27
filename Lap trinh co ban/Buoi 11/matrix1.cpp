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
void VTMax(float a[][30], int m, int n)
{
    float max = a[0][0];
    int i, j;
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            if (max < a[i][j])
                max = a[i][j];
    cout << "\nGia tri max = " << max;
    cout << "\nCac vi tri dat max:\n";
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            if (max == a[i][j])
                cout << "a["<<i<<"]["<<j<<"] ";
}
bool MTThua(float a[][30], int m, int n)
{
    int dem = 0;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            if (a[i][j] == 0)
                dem++;
    return (dem*2 > m*n);
}
bool SSHang(float a[][30], int m, int n, int i, int k)
{
    // so sánh hàng i và hàng k
    int j;
    for (j=0; j < n; j++) // với j từ cột 0 đến cột cuối
        if (a[i][j] != a[k][j])
            return false;
    return true;
}
bool SSCot(float a[][30], int m, int n, int j, int k)
{
    // so sánh cột j và cột k
    int i;
    for (i=0; i<m; i++) // với i từ hàng 0 đến hàng cuối
        if (a[i][j] != a[i][k])
            return false;
    return true;
}
int main()
{
    float matrix[20][30];
    int m, n;
    cout << "\nNhap so hang va so cot: ";
    cin >> m >> n;
    NhapMT(matrix, m, n);
    HienthiMT(matrix, m, n);
    VTMax(matrix, m, n);
    if (MTThua(matrix, m, n))
        cout << "\nLa ma tran thua.";
    else cout << "\nKhong la ma tran thua.";
    if (SSHang(matrix,m,n,0,1))
        cout << "\nHang 0 va 1 bang nhau";
    else cout << "\nHang 0 va 1 khong bang nhau";
    int i, j, k;
    cout << "\nCac cap hang bang nhau";
    for (i=0; i < n-1; i++)
        for (k = i+1; k < n; k++)
            if (SSCot(matrix, m, n, i, k))
                cout << "\n" << j << " " << k;
    cout << "\nCac cap cot bang nhau";
    for (j=0; j < n-1; j++)
        for (k = j+1; k < n; k++)
            if (SSCot(matrix, m, n, j, k))
                cout << "\n" << j << " " << k;
    return 0;
}
