#include<iostream>
using namespace std;

int main()
{
    float n, x;
    x = 0;

    do {
        cout << "\nNhap so thuc: ";
        cin >> n;
        if (n > x)
            x = n;
    } while ( n != 0);

    cout << "\nGia tri lon nhat trong cac so vua nhap la: "
    << x << endl;

    return 0;
}
