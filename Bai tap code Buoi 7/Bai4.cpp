#include<iostream>
#include<cmath>
using namespace std;
int UCLN(int a, int b)
{
    // Lấy trị tuyệt đối để xử lý số âm
    a = abs(a);
    b = abs(b);

    // Xử lý trường hợp có số 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
void Tong(int a, int b, int c, int d)
{
    //Tổng của (a/b) + (c/d)
    int kq_tu = a*d + c*b;
    int kq_mau = b*d;
    //Trả về 0 luôn nếu tử hoặc mẫu của phân số kết quả = 0
    if (kq_tu == 0 || kq_mau == 0)
    {
        cout << "\nTong cua 2 phan so tren la = 0";
        return;
    }
    //Trả về 1 luôn nếu tử = mẫu
    if (kq_tu == kq_mau)
    {
        cout << "\nTong cua 2 phan so tren la = 1";
        return;
    }
    // Chuẩn hóa dấu
    if (kq_mau < 0)
    {
        kq_tu = -kq_tu;
        kq_mau = -kq_mau;
    }
    int ucln = UCLN(kq_tu,kq_mau);
    cout << "\nTong cua 2 phan so tren da duoc toi gian la " << kq_tu/ucln << "/" << kq_mau/ucln;
    return;
}
void Hieu(int a, int b, int c, int d)
{
    //Hiệu của (a/b) + (c/d)
    int kq_tu = a*d - c*b;
    int kq_mau = b*d;
    //Trả về 0 luôn nếu tử hoặc mẫu của phân số kết quả = 0
    if (kq_tu == 0 || kq_mau == 0)
    {
        cout << "\nHieu cua 2 phan so tren la = 0";
        return;
    }
    //Trả về 1 luôn nếu tử = mẫu
    if (kq_tu == kq_mau)
    {
        cout << "\nHieu cua 2 phan so tren la = 1";
        return;
    }
    // Chuẩn hóa dấu
    if (kq_mau < 0)
    {
        kq_tu = -kq_tu;
        kq_mau = -kq_mau;
    }
    int ucln = UCLN(kq_tu,kq_mau);
    cout << "\nHieu cua 2 phan so tren da duoc toi gian la " << kq_tu/ucln << "/" << kq_mau/ucln;
    return;
}
void Tich(int a, int b, int c, int d)
{
    //Tích của (a/b) * (c/d)
    int kq_tu = a*c;
    int kq_mau = b*d;
    //Trả về 0 luôn nếu tử hoặc mẫu của phân số kết quả = 0
    if (kq_tu == 0 || kq_mau == 0)
    {
        cout << "\nTich cua 2 phan so tren la = 0";
        return;
    }
    //Trả về 1 luôn nếu tử = mẫu
    if (kq_tu == kq_mau)
    {
        cout << "\nTich cua 2 phan so tren la = 1";
        return;
    }
    // Chuẩn hóa dấu
    if (kq_mau < 0)
    {
        kq_tu = -kq_tu;
        kq_mau = -kq_mau;
    }
    int ucln = UCLN(kq_tu,kq_mau);
    cout << "\nTich cua 2 phan so tren da duoc toi gian la " << kq_tu/ucln << "/" << kq_mau/ucln;
    return;
}
void Thuong(int a, int b, int c, int d)
{
    //Thương của (a/d) / (c/d)
    int kq_tu = a*d;
    int kq_mau = b*c;
    //Trả về 0 luôn nếu tử hoặc mẫu của phân số kết quả = 0
    if (kq_tu == 0 || kq_mau == 0)
    {
        cout << "\nThuong cua 2 phan so tren la = 0";
        return;
    }
    //Trả về 1 luôn nếu tử = mẫu
    if (kq_tu == kq_mau)
    {
        cout << "\nThuong cua 2 phan so tren la = 1";
        return;
    }
    // Chuẩn hóa dấu
    if (kq_mau < 0)
    {
        kq_tu = -kq_tu;
        kq_mau = -kq_mau;
    }

    int ucln = UCLN(kq_tu, kq_mau);
    cout << "\nThuong cua 2 phan so tren da duoc toi gian la " << kq_tu/ucln << "/" << kq_mau/ucln;
    return;
}
int NhapTuSo()
{
    int tu;
    do{
    cout << "\nNhap tu so khac 0: ";
    cin >> tu;
    } while(tu == 0);
    return tu;
}
int NhapMauSo()
{
    int mau;
    do{
    cout << "\nNhap mau so khac 0: ";
    cin >> mau;
    } while(mau == 0);
    return mau;
}
int main()
{
    int a, b; //Phan so thu nhat
    int c, d; //phan so thu hai
    a = NhapTuSo();
    b = NhapMauSo();
    c = NhapTuSo();
    d = NhapMauSo();
    cout << "\nHai phan so da nhap vao la " << a << "/" << b << " va " << c << "/" << d << endl;
    Tong(a,b,c,d);
    Hieu(a,b,c,d);
    Tich(a,b,c,d);
    Thuong(a,b,c,d);
    return 0;
}
