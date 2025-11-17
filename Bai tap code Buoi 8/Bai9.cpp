#include <iostream>
using namespace std;

bool KiemTraDoiXung(int x) {
    if (x < 0) 
        return false;
    int xuoi = x;
    int nguoc = 0;
    while (x > 0) {
        int d = x % 10;
        nguoc = nguoc * 10 + d;
        x /= 10;
    }
    return (xuoi == nguoc);
}

int main() {
    int m, n;
    do {
        cout << "\nNhap 2 so m va n voi dieu khien m < n: ";
        cin >> m >> n;
    } while ((m <= 0 || m >= n));

    bool coDoiXung = false;
    cout << "\nCac so doi xung trong khoang m=" << m << " toi n=" << n << " la: ";
    for (int i = m; i <= n; ++i) {
        if (KiemTraDoiXung(i)) 
        {
            coDoiXung = true;
            cout << " " << i;
        }
    }

    if (!coDoiXung) cout << "\nKhong ton tai so doi xung trong khoang nay\n";
    return 0;
}