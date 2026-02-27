#include<iostream>
#include<cmath>
using namespace std;

bool ktnt(int n) //Kiểm tra số nguyên tố
{
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if ( n % i == 0)
            return false;
    }
    return n >= 2;
}
bool ht(int n) //Kiểm tra số hoàn thiện
{
    int tong = 0;
    for (int i = 1; i < n; i++)
    {
        if ( n % i == 0)
            tong += i;
    }
    return ((tong == n));
}
int ucln(int a, int b) //Ước chung lớn nhất
{
    // Lấy trị tuyệt đối để xử lý số âm
    a = abs(a);
    b = abs(b);
    // Xử lý trường hợp có số 0
    if ( (a == 0) || (b == 0))
        return (abs(a-b));
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int bcnn(int a, int b) //Bội chung nhỏ nhất, công thức: (a*b)/ucln(a,b)
{
    return (a * b) / ucln(a, b);
}
void cacsohoanthien(int n) //các số hoàn thiện <= n
{
    cout << "\nCac so hoan thien nho hon hoac bang n la: ";
    for (int i = 2; i <= n; i++)
    {
        if (ht(i))
            cout << " " << i;
    }
    cout << endl;
}
void cacsonguyento(int n) //các số nguyên tố <= n
{
    cout << "\nCac so nguyen to nho hon hoac bang n la: ";
    for (int i = 1; i <= n; i++)
    {
        if (ktnt(i))
            cout << " " << i;
    }
    cout << endl;
}
int bcnn_dayso(int n) //tìm các bcnn của n số nguyên đầu vào
{
    //cần phải tồn tại ít nhất 2 số nguyên đầu vào (n >= 2) để tìm bcnn
    if (n < 2)
    {
        cout << "\nSo luong so nguyen nhap vao khong hop le.";
        return 0;
    }
    int so1, so2;
    cout << "\n--- Tim BCNN cua " << n << " so ---";
    cout << "\nNhap so nguyen thu 1: ";
    cin >> so1;
    cout << "\nNhap so nguyen thu 2: ";
    cin >> so2;
    int temp = bcnn(so1,so2); //lưu tạm bcnn của 1 cặp để rồi so với số tiếp theo
    
    int so;
    for (int i = 3; i <= n; i++)
    {
        cout << "\nNhap so nguyen thu " << i << ": ";
        cin >> so;
        temp = bcnn(temp,so);
    }
    return temp;
}
int main()
{
    int n, a, b;
    cout << "\nNhap so nguyen n: ";
    cin >> n;
    cout << "\nNhap so nguyen a: ";
    cin >> a;
    cout << "\nNhap so nguyen b: ";
    cin >> b;
    cout << boolalpha; // In ra true/false thay vì 1/0
    cout << "\nn la so nguyen to? - " << ktnt(n) << "\n";
    cout << "\nn la so hoan thien? - " << ht(n) << "\n";
    cout << "\nUoc chung lon nhat cua a va b la: " << ucln(a,b) << "\n";
    cout << "\nBoi chung nho nhat cua a va b la: " << bcnn(a,b) << "\n";
    cacsohoanthien(n);
    cacsonguyento(n);
    int ket_qua_bcnn = bcnn_dayso(n);
    if (ket_qua_bcnn != 0)
    {
        cout << "\nBoi chung nho nhat cua day so la: " << ket_qua_bcnn;
    }
}