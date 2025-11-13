#include<iostream>
using namespace std;
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
void ToiGianPhanSo(int tu, int mau)
{
    int ucln = UCLN(tu,mau);
    int tu_rutgon = tu/ucln;
    int mau_rutgon = mau/ucln;
    cout << "\nPhan so toi gian cua phan so " << tu << "/" << mau
    << " la " << tu_rutgon << "/" << mau_rutgon << endl;
}
int main()
{
    int tu, mau, a, b, ucln;
    tu = NhapTuSo();
    mau = NhapMauSo();
    ToiGianPhanSo(tu,mau);
    return 0;
}
