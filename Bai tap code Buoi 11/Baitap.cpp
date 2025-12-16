#include<iostream>
#include<cmath>
using namespace std;

//Nhập, Hiển thị MT
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

//Tìm MT chuyển vị của MT gốc
void Chuyenvi(float a[][20], float b[][20], int m, int n)
{
    for (int i = 0; i<m; i++)
    for (int j = 0; j<n; j++)
        b[j][i] = a[i][j];
}

//Copy ma trận ra một ma trận mới
void CopyMT(float a[][20], float b[][20], int m, int n)
{   
    for (int i = 0; i<m; i++)
    for (int j = 0; j<n; j++)
        b[i][j] = a[i][j];
}

//Hoán đổi 2 cột ma trận
void HoanDoiHaiCot(float a[][20], int m, int n, int k, int l)
{
    float b[20][20];
    CopyMT(a, b, m, n); //copy ra một MT mới rồi mới xử lý để tí dễ so sánh
    float temp;
    for (int i = 0; i < m; i++)
    {
        temp = b[i][k];
        b[i][k] = b[i][l];
        b[i][l] = temp;
    }
    cout << "\nMa tran truoc khi doi 2 cot voi nhau la: ";
    HienThiMT(a, m, n);
    cout << "\nMa tran sau khi doi 2 cot voi nhau la: ";
    HienThiMT(b, m, n);
}

//Tìm các hàng có tổng ptử trong hàng max
void TimCacHangTongPTMax(float a[][20], int m, int n)
{
    float tongHang = 0;
    float lonNhat = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            tongHang += a[i][j];
        if (lonNhat < tongHang)
            lonNhat = tongHang;
        tongHang = 0;
    }
    cout << "\nGia tri tong hang lon nhat trong ma tran la: " << lonNhat;
    cout << "\nCac hang co tong cac phan tu trong hang gia tri lon nhat la: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            tongHang += a[i][j];
        if (tongHang == lonNhat)
            cout << i << " ";
        tongHang = 0;
    }
}
//Hàm tìm phần tử max trong hàng q định sẵn
float GTLNTrogHang(float a[][20], int q, int n)
{
    float lonNhat = -3.4*pow(10,38);
    for (int j = 0; j < n; j++)
        if (a[q][j] > lonNhat)
            lonNhat = a[q][j];
    return lonNhat;
}
//Tìm vị trí (hàng, cột) các ptử đạt gtrị max
void CacPTMax(float a[][20], int m, int n)
{
    float lonNhat = 0;
    for (int i = 0; i < m; i++)
        if (GTLNTrogHang(a,i,n) > lonNhat)
            lonNhat = GTLNTrogHang(a,i,n);
    cout << "\nGia tri lon nhat trong ma tran la: " << lonNhat;

    cout << "\nVi tri cac phan tu dat gia tri lon nhat la: ";
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        if (a[i][j] == lonNhat)
            cout << "a[" << i << "]"
            << "[" << j << "]" << " ";
}

//Tìm tất cả các cột có nhiều số dương nhất
int SoLuongSoDuongCuaMotCot(float a[][20], int m, int k)
{
    //m hàng
    //cột k chỉ định của ma trận
    int slg = 0;
    for (int i = 0; i < m; i++)
        if (a[i][k] > 0)
            slg += 1;
    return slg;
}
void CacCotSoSoDuongMax(float a[][20], int m, int n)
{
    //tìm số lượng max đã rồi mới xử lý
    int lonNhat = 0;
    for (int i = 0; i < n; i++)
    {
        int slg = SoLuongSoDuongCuaMotCot(a,m,i);
        if (slg > lonNhat)
            lonNhat = slg;
    }
    //xử lý
    cout << "\nCac cot co so luong so duong nhieu nhat la: ";
    for (int i = 0; i < n; i++)
    {
        int slg = SoLuongSoDuongCuaMotCot(a,m,i);
        if (slg == lonNhat)
            cout << i <<" ";
    }
}

//Hàm tìm phần tử min trong hàng q định sẵn
float GTNNTrogHang(float a[][20], int q, int n)
{
    float beNhat = 3.4*pow(10,38); //tạo biến bé nhất số dương vô cùng đạt được của float
    for (int j = 0; j < n; j++)
        if (a[q][j] < beNhat)
            beNhat = a[q][j];
    return beNhat;
}
//Hàm tìm phần tử max trong cột k định sẵn
float GTLNTrogCot(float a[][20], int m, int k)
{
    float lonNhat = -3.4*pow(10,38);
    for (int i = 0; i < m; i++)
        if (a[i][k] > lonNhat)
            lonNhat = a[i][k];
    return lonNhat;
}
//Yên ngựa ma trận
void TimDiemYenNguaMT(float a[][20], int m, int n)
{
    bool found = false;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            float gtht = a[i][j];

            // Kiểm tra điều kiện Min Hàng
            float benhat = GTNNTrogHang(a, i, n);

            // Nếu phần tử hiện tại (A[i][j]) là Min của hàng i
            if (gtht == benhat) 
            {
                // Thì Kiểm tra điều kiện Max Cột
                float lonnhat = GTLNTrogCot(a, m, j);

                // Nếu A[i][j] cũng là Max của cột j
                if (gtht == lonnhat) 
                {
                    cout << "\nDiem Yen Ngua tim duoc tai vi tri [" << i << "][" << j 
                         << "] voi gia tri: " << gtht << endl;
                    found = true;
                }
            }
        }
    }

    if (!found) {
        cout << "\nKhong tim thay diem yen ngua nao trong ma tran.";
    }
}

//Check MT tam giác
bool KTraMTTGiacTren(float a[][20], int m)
{
    for (int i=1; i < m; i++)
    for (int j=0; j < i; j++)
    //ptử ở dưới đg chéo chính
        if (a[i][j] != 0)
            return false;
    return true;
}
bool KTraMTTGiacDuoi(float a[][20], int m)
{
    for (int i=0; i < m-1; i++)
    for (int j=i+1; j < m; j++)
    //ptử ở trên đg chéo chính
        if (a[i][j] != 0)
            return false;
    return true;
}
void MTTG(float a[][20], int m)
{
    if (KTraMTTGiacTren(a,m) || KTraMTTGiacDuoi(a,m))
        cout << "\nMa tran tren la ma tran tam giac.";
    else cout << "\nMa tran tren khong la ma tran tam giac.";
}

//Check 2 MT xem có phải chuyển vị của nhau
bool CheckMTBangNhau(float a[][20], float b[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        if (a[i][j] != b[i][j])
            return false;
    return true;
}
void CheckMTChuyenVi(float a[][20], float b[][20], int m, int n)
{
    float cv[20][20];
    Chuyenvi(a,cv,m,n);
    if (CheckMTBangNhau(cv,b,m,n))
        cout << "\nMa tran B la ma tran chuyen vi cua ma tran A.";
    else cout << "\nMa tran B khong la ma tran chuyen vi cua ma tran A.";
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

    TimCacHangTongPTMax(A, m, n);

    CacPTMax(A, m, n);

    CacCotSoSoDuongMax(A, m, n);

    TimDiemYenNguaMT(A, m, n);

    MTTG(A, m);

    float B[20][20];
    cout << "\nNhap ma tran B co n hang m cot (n x m): ";
    NhapMT(B, n, m);
    cout << "\nMa tran vua nhap la:";
    HienThiMT(B,n,m);
    CheckMTChuyenVi(A, B, m, n);
    
    return 0;
}
