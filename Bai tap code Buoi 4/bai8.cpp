#include<iostream>

using namespace std;

int main()
{
    int n, x;
    do{
        cout << "\nNhap so nguyen n = ";
        cin >> n;
        if (n > x)
            x = n;
    } while (n > 0);
    cout << "\nGia tri lon nhat trong so cac so nhap vao la: " << x << endl;
    return 0;
}
