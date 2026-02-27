#include<iostream>
using namespace std;

void NhapMT(float a[][100], int m, int n)
{
    cout << "\nNhap ma tran:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}
void HienThi(float a[][100], int m, int n)
{
   for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void Chuyenvi(float a[][100], float cv[][100], int m, int n)
{
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
        cv[i][j] = a[j][i];
}
void DoiHang(float a[][100], int m, int n, int k, int l)
{
    for (int j=0; j<n; j++)
    {
        float temp;
        temp = a[k][j];
        a[k][j] = a[l][j];
        a[l][j] = temp;
    }

}
float TongHang(float a[][100], int m, int n, int i)
{
    float sum = 0;
    for (int j=0; j<n; j++)
        sum += a[i][j];
    return sum;
}
int DemSoDuong(float a[][100], int m, int n, int j)
{
    int dem = 0;
    for (int i=0; i<m; i++)
        if (a[i][j] > 0)
            dem++;
    return dem;
}

//Hàm bài tập của em ở dưới đây ạ
// Đếm số lượng số dương của một hàng
int SlgSoDuongCuaMotHang(float a[][100], int n, int h)
{
    // n cột
    // h là chỉ số hàng của ma trận
    int slg = 0;
    for (int j = 0; j < n; j++)
        if (a[h][j] > 0)
            slg += 1;
    return slg;
}

// Tìm tất cả các hàng có nhiều số dương nhất
void CacHangSlgSoDuongMax(float a[][100], int m, int n)
{
    int lonNhat = 0;
    for (int i = 0; i < m; i++)
    {
        int slg = SlgSoDuongCuaMotHang(a, n, i);
        if (slg > lonNhat)
            lonNhat = slg;
    }

    cout << "\nCac hang co so luong so duong nhieu nhat la: ";
    for (int i = 0; i < m; i++)
    {
        int slg = SlgSoDuongCuaMotHang(a, n, i);
        if (slg == lonNhat)
            cout << i << " ";
    }
}
int main()
{
    float a[100][100], b[100][100];
    int i;
    int m, n;
    cout << "\nNhap so hang, cot: ";
    cin >> m >> n;

    NhapMT(a, m, n);

    cout << "\nMa tran la:\n";
    HienThi(a, m, n);

    Chuyenvi(a, b, m, n);
    cout << "\nMa tran chuyen vi:\n";
    HienThi(b,n,m);

    //DoiHang(a,m,n,0,1);
    int k, l;
    cout << "\nNhap chi so 2 hang can doi:";
    cin >> k >> l;
    DoiHang(a,m,n,k,l);
    cout << "\nMa tran sau khi doi hang "
        << k << " va " << l << " la:\n";
    HienThi(a,m,n);

    //IN tong cac hang trong ma tran
    for (i=0; i<m; i++)
        cout << "\nTong PT tren hang " << i
            << ": " << TongHang(a,m,n,i);
    //Tìm hàng có tổng lớn nhất
    float maxHang = TongHang(a,m,n,0);
    int index = 0;
    for (i=1; i<m; i++)
    {
        if (maxHang < TongHang(a,m,n,i))
        {
            maxHang = TongHang(a,m,n,i);
            index = i;
        }
    }
    cout << "\nGia tri tong hang lon nhat: " << maxHang
        << "\nTai hang co chi so " << index;


    cout << "\nHien thi so luong so duong tren moi cot\n";
    for (int j=0; j<n; j++)
        cout << "\nSo duong tai cot " << j
            << ":" << DemSoDuong(a,m,n,j);

    //Hàm bài tập của em ở dưới đây ạ
    CacHangSlgSoDuongMax(a,m,n);
    return 0;
}
