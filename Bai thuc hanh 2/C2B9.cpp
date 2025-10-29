#include<iostream>

using namespace std;

int main()
{
    int n, x;
    do{
        cout << "\nNhap so nguyen n = ";
        cin >> n;
        if ((n > x) && (n % 5 == 0))
            x = n;
    } while (n > 0);
    cout << "\nGia tri lon nhat trong so cac so nhap vao va chia het cho 5 la: " << x << endl;
    return 0;
}
