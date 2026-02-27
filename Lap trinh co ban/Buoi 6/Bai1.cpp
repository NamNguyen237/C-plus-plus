#include<iostream>

using namespace std;

int main()
{
    float x, y;
    string ch;

    cout << "\nNhap x = ";
    cin >> x;
    cout << "\nNhap y = ";
    cin >> y;
    cout << "\nNhap ky tu phep toan: ";
    cin >> ch;

    if (ch == "/" || ch == ":")
        cout << "\nKet qua phep toan chia giua x va y la: " << x/y << endl;
    else if (ch == "+")
        cout << "\nKet qua phep toan cong giua x va y la: " << x+y << endl;
    else if (ch == "-")
        cout << "\nKet qua phep toan tru giua x va y la: " << x-y << endl;
    else if (ch == "*")
        cout << "\nKet qua phep toan nhan giua x va y la: " << x*y << endl;
    else
        cout << "\nKy tu vua nhap khong phai la phep toan" << endl;
    return 0;
}
