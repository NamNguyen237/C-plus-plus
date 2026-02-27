#include <iostream>
using namespace std;

int main() {
    int n;
    double x;
    cout << "Nhap bac n: ";
    if (!(cin >> n)) return 0;
    if (n < 0) {
        cerr << "n phai >= 0\n";
        return 0;
    }

    cout << "Nhap gia tri x: ";
    if (!(cin >> x)) return 0;

    cout << "Nhap " << (n + 1) << " he so a0 a1 ... an (a0 la he so cua x^n):\n";

    double coeff;
    // Đọc a0 (hệ số của x^n)
    if (!(cin >> coeff)) return 0;
    double result = coeff;

    // Với mỗi hệ số tiếp theo ai (từ a1 đến an), cập nhật result theo Horner
    for (int i = 1; i <= n; ++i) {
        if (!(cin >> coeff)) {
            cerr << "Nhap thieu he so\n";
            return 0;
        }
        result = result * x + coeff;
    }

    cout << "Gia tri da thuc tai x = " << x << " la: " << result << '\n';
    return 0;
}