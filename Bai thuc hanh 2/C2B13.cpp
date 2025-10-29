#include <iostream>
using namespace std;

int main() {
    // Bang cuu chuong tu 1 den 9
    for (int i = 1; i <= 9; ++i) {
        cout << "   --- Bang cuu chuong " << i << " ---" << endl;

        // Thuc hien cac phep nhan
        for (int j = 1; j <= 9; ++j) {
            cout << "\t" << i << " x " << "\t" << j << " = " << "\t" << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}
