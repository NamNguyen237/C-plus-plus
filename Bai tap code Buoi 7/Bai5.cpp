#include <iostream>
using namespace std;

// Hàm tính m^n % 100 bằng lũy thừa nhị phân
int haiChuSoCuoi(int m, int n) {
    int result = 1;
    m = m % 100; // chỉ cần giữ 2 chữ số cuối
    while (n > 0) {
        if (n % 2 == 1)
            result = (result * m) % 100;
        m = (m * m) % 100;
        n /= 2;
    }
    return result;
}

int main() {
    int m, n;
    do{
    cout << "Nhap m va n nguyen duong: ";
    cin >> m >> n;
    } while (m <= 0 || n <= 0);
    int kq = haiChuSoCuoi(m, n);
    cout << "Hai chu so cuoi cua " << m << "^" << n << " la: ";
    if (kq < 10) cout << "0"; // thêm số 0 nếu chỉ có 1 chữ số
    cout << kq << endl;

    return 0;
}
