#include<iostream>
#include<math.h>
using namespace std;
/*
Viet chuong trinh tinh tong s2 la cac so duong dươc nhap tu ban phim
Ket thuc viec nhap va tinh ttong neu nguoi dung nhap vao so <= 0
*/

int main()
{
    int s2, n;
    s2 = 0;
    cout << "Nhap so: ";
    cin >> n;
    while (n>0)
    {
        s2 = s2 + n;
        cout << "Nhap so: ";
        cin >> n;
    }
    cout << "\nTong cac so vua nhap la: " << s2 << endl;
    return 0;
}
