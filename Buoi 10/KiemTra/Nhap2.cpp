#include <iostream>
#include <cmath> // Dùng cho các hàm toán học nếu cần
#include <iomanip> // Dùng để định dạng số hiển thị

using namespace std;

// 1. Hàm nhập từ bàn phím
// Sử dụng tham chiếu (&) để thay đổi giá trị của biến x và n sau khi nhập
void NhapDuLieu(double &x, int &n) {
    cout << "Nhap he so x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
}

// 2. Hàm tính tổng S
double TinhTongS(double x, int n) {
    double S = 1.0;      // Khởi tạo tổng S ban đầu là số hạng đầu tiên (1)
    double term = 1.0;   // Biến lưu giá trị của số hạng hiện tại

    // Vòng lặp tính từ số hạng thứ 1 đến n
    for (int i = 1; i <= n; i++) {
        // Tính số hạng hiện tại dựa trên số hạng trước đó
        // Công thức: term_mới = term_cũ * (-x^2) / ((2i-1) * 2i)
        term = term * (-x * x) / ((2 * i - 1) * (2 * i));

        // Cộng số hạng vừa tính vào tổng S
        S += term;
    }

    return S;
}

// 3. Chương trình chính
int main() {
    double x;
    int n;

    // Gọi hàm nhập
    NhapDuLieu(x, n);

    // Gọi hàm tính toán
    double ketQua = TinhTongS(x, n);

    // Xuất dữ liệu
    cout << "Tong S la: " << ketQua << endl;

    // Mẹo nhỏ: Để kiểm tra, bạn có thể so sánh với hàm cos(x) của thư viện
    // cout << "Gia tri thuc te cua cos(" << x << ") la: " << cos(x) << endl;

    return 0;
}
