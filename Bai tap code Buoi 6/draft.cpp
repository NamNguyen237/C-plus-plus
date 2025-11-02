#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double S = 0.0;

    cout << "Nhap so nguyen n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        S += static_cast<double>(i) / (i + 1);
    }

    cout << "Tong S = " << S << endl;
    return 0;
}
