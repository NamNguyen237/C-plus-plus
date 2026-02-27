#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    // Lấy trị tuyệt đối để xử lý số âm
    a = abs(a);
    b = abs(b);

    // Xử lý trường hợp có số 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int ktnt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int ht(int n) {
    int sum = 1;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i) sum += n/i;
        }
    }
    return sum == n && n != 1;
}

void cacsonguyento(int n) {
    for (int i = 2; i <= n; i++)
        if (ktnt(i)) cout << i << " ";
}

void cacsohoanthien(int n) {
    for (int i = 2; i <= n; i++)
        if (ht(i)) cout << i << " ";
}

int main() {
    cout << "UCLN(12,18): " << ucln(12,18) << endl;
    cout << "BCNN(12,18): " << bcnn(12,18) << endl;
    cout << "So nguyen to <= 20: "; cacsonguyento(20); cout << endl;
    cout << "So hoan thien <= 1000: "; cacsohoanthien(1000); cout << endl;
    return 0;
}
