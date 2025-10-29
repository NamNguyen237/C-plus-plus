#include <iostream>
using namespace std;

int main() {
    cout << "Cac phuong an tao thanh 200000d:\n";
    int count = 0;

    for (int z = 0; z <= 40; ++z) {         // z: số tờ 5000đ
        for (int y = 0; y <= 100; ++y) {        // y: số tờ 2000đ
            int x = 200000 - 2000*y - 5000*z;        // x: số tờ 1000đ
            if (x >= 0) {
                int total = x*1000 + y*2000 + z*5000;
                if (total == 200000) {
                    cout << "1000d: " << x << ", 2000d: " << y << ", 5000d: " << z << endl;
                    count++;
                }
            }
        }
    }

    cout << "\nTong so phuong an: " << count << endl;
    return 0;
}
