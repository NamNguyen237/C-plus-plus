#include <iostream>
using namespace std;

bool KiemTraFibo(int m) {
    int a = 1, b = 1;
    while (b < m) {
        int c = a + b;
        a = b; b = c;
    }
    return b == m || m == 1;
}
void DayFibo(int n)
{
    // a) n số fibonaci đầu tiên
    int a = 1, b = 1;
    cout << "\nDay Fibo gom " << n <<" so Fibo dau tien: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b; b = c;
    }
    cout << endl;
}
void FiboBeHonN(int n)
{
    // b) Các số fibo ≤ n
    int a = 1, b = 1;
    cout << "\nCac so Fibo <= " << n << ": ";
    while (a <= n) {
        cout << a << " ";
        int c = a + b;
        a = b; b = c;
    }
    cout << endl;
}
int main() {
    int n;
    cout << "\nNhap n: ";
    cin >> n;
    DayFibo(n);
    FiboBeHonN(n);
    // c) Kiểm tra m
    int m;
    cout << "\nNhap m: ";
    cin >> m;
    if (KiemTraFibo(m))
        cout << "\nSo vua nhap la so fibonacci.";
    else
        cout << "\nSo vua nhap khong phai la so fibonacci.";

    return 0;
}
