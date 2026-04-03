#include <iostream>
using namespace std;

void doicho(int a, int b) {
    cout << "Trong ham doi cho (value)\n";
    cout << "Gia tri cua a = " << a << " tai dia chi " << &a << endl;
    cout << "Gia tri cua b = " << b << " tai dia chi " << &b << endl;

    int tg = a;
    a = b;
    b = tg;

    cout << "\nSau khi doi trong ham\n";
    cout << "Gia tri cua a = " << a << " tai dia chi " << &a << endl;
    cout << "Gia tri cua b = " << b << " tai dia chi " << &b << endl;
}

void doicho2(int *a, int *b) {
    cout << "\nTrong ham doi cho 2 (pointer)\n";
    cout << "Gia tri cua a = " << *a << " tai dia chi " << a << endl;
    cout << "Gia tri cua b = " << *b << " tai dia chi " << b << endl;

    int tg = *a;
    *a = *b;
    *b = tg;
}

void doicho3(int &a, int &b) {
    cout << "\nTrong ham doi cho 3 (reference)\n";
    cout << "Gia tri cua a = " << a << " tai dia chi " << &a << endl;
    cout << "Gia tri cua b = " << b << " tai dia chi " << &b << endl;

    int tg = a;
    a = b;
    b = tg;
}

int main() {
    int a = 10, b = 20;

    cout << "Trong ham main luc dau\n";
    cout << "Gia tri cua a = " << a << " tai dia chi " << &a << endl;
    cout << "Gia tri cua b = " << b << " tai dia chi " << &b << endl;

    
    doicho(a, b);

    cout << "\nSau khi goi doicho (value)\n";
    cout << "a = " << a << "  b = " << b << endl;

    doicho2(&a, &b);

    cout << "\nSau khi goi doicho2 (pointer)\n";
    cout << "a = " << a << "  b = " << b << endl;

    doicho3(a, b);

    cout << "\nSau khi goi doicho3 (reference)\n";
    cout << "a = " << a << "  b = " << b << endl;
}