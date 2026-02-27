#include<iostream>
#include<cmath>
using namespace std;

void NhapMT(float a[][20], int m, int n)
{
    for (int i=0; i<m; i++)
    for (int j=0; j<n; j++)
        cin >> a[i][j];
}
void HienThiMT(float a[][20], int m, int n)
{
    cout << "\n";
    for (int i=0; i<m; i++)
    {
    for (int j=0; j<n; j++)
        cout << a[i][j] << " ";
    cout << "\n";
    }
}
void Chuyenvi(float a[][20], float b[][20], int m, int n)
{
    for (int i = 0; i<n; i++)
    for (int j = 0; j<m; j++)
        b[i][j] = a[j][i];
}
void HoanDoiHaiCot(float a[][20], int m, int n, int k, int l)
{
    float b[20][20];
    for (int i = 0; i<m; i++)
    for (int j = 0; j<n; j++)
        b[i][j] = a[i][j];

    float temp;
    for (int i = 0; i < m; i++)
    {
        temp = b[i][k];
        b[i][k] = b[i][l];
        b[i][l] = temp;
    }
    cout << "\nMa tran truoc khi doi 2 cot voi nhau la: \n";
    HienThiMT(a, m, n);
    cout << "\nMa tran sau khi doi 2 cot voi nhau la: \n";
    HienThiMT(b, m, n);
}
void HoanDoiHaiHang(float a[][20], int m, int n, int p, int q)
{
    float b[20][20];
    for (int i = 0; i<m; i++)
    for (int j = 0; j<n; j++)
        b[i][j] = a[i][j];

    float temp;
    for (int j = 0; j < n; j++)
    {
        temp = b[p][j];
        b[p][j] = b[q][j];
        b[q][j] = temp;
    }
    cout << "\nMa tran truoc khi doi 2 hang voi nhau la: ";
    HienThiMT(a, m, n);
    cout << "\nMa tran sau khi doi 2 hang voi nhau la: ";
    HienThiMT(b, m, n);
}
void TimHangCoTongCacPTMax(float a[][20], int m, int n)
{
    float lonNhat = 0;
    float temp = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            temp += a[i][j];
        if (lonNhat < temp)
            lonNhat = temp;
        temp = 0;
    }
    cout << "\nGia tri tong hang lon nhat trong ma tran la: " << lonNhat;
    
    cout << "\nCac hang co tong cac phan tu trong hang gia tri lon nhat la: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            temp += a[i][j];
        if (temp == lonNhat)
            cout << i << " ";
        temp = 0;
    }
}

void ViTriCacPTMax(float a[][20], int m, int n)
{
    float lonNhat = 0;
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        if (a[i][j] > lonNhat)
            lonNhat = a[i][j];
    cout << "\nGia tri lon nhat trong ma tran la: " << lonNhat;

    cout << "\nVi tri cac phan tu dat gia tri lon nhat la: ";
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        if (a[i][j] == lonNhat)
            cout << "a[" << i << "]"
            << "[" << j << "]" << " ";
}
//Tìm tất cả các cột có nhiều số dương nhất
int SlgSoDuongCuaMotCot(float a[][20], int m, int k)
{
    //m hàng
    //cột k chỉ định của ma trận
    int slg = 0;
    for (int i = 0; i < m; i++)
        if (a[i][k] > 0)
            slg += 1;
    return slg;
}
void CacCotSlgSoDuongMax(float a[][20], int m, int n)
{
    //tìm số lượng max đã rồi mới xử lý
    int lonNhat = 0;
    for (int i = 0; i < n; i++)
    {
        int slg = SlgSoDuongCuaMotCot(a,m,i);
        if (slg > lonNhat)
            lonNhat = slg;
    }
    //xử lý
    cout << "\nCac cot co so luong so duong nhieu nhat la: ";
    for (int i = 0; i < n; i++)
    {
        int slg = SlgSoDuongCuaMotCot(a,m,i);
        if (slg == lonNhat)
            cout << i <<" ";
    }
}
int main()
{
    float A[20][20];
    int m,n;
    cout << "\nNhap so hang va so cot m va n: ";
    cin >> m >> n;

    cout << "\nNhap ma tran A co m hang n cot (m x n): ";
    NhapMT(A,m,n);

    cout << "\nMa tran vua nhap la:";
    HienThiMT(A,m,n);

    float cv[20][20];
    Chuyenvi(A, cv, m, n);
    cout << "\nMa tran chuyen vi cua ma tran tren la: ";
    HienThiMT(cv, n, m);

    int k, l;
    cout << "\nNhap so cot k va l muon hoan doi cho nhau: ";
    cin >> k >> l;
    HoanDoiHaiCot(A, m, n, k, l);

    int q, p;
    cout << "\nNhap so hang p va q muon hoan doi cho nhau: ";
    cin >> p >> q;
    HoanDoiHaiHang(A, m, n, p, q);

    TimHangCoTongCacPTMax(A, m, n);

    ViTriCacPTMax(A, m, n);

    CacCotSlgSoDuongMax(A, m, n);

    return 0;
}