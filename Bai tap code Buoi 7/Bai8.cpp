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
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // a) n số fibonaci đầu tiên
    int a = 1, b = 1;
    cout << "Day Fibo: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b; b = c;
    }
    cout << endl;

    // b) Các số ≤ n
    a = 1; b = 1;
    cout << "Fibo <= " << n << ": ";
    while (a <= n) {
        cout << a << " ";
        int c = a + b;
        a = b; b = c;
    }
    cout << endl;

    // c) Kiểm tra m
    int m;
    cout << "Nhap m: ";
    cin >> m;
    if (KiemTraFibo(m))
        cout << "So vua nhap la so fibonacci";
    else
        cout << "So vua nhap khong phai la so fibonacci";

    return 0;
}
