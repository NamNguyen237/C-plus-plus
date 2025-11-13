#include<iostream>

using namespace std;

int main()
{
    double x, y;
    char ch;

    cout << "\nNhap x = ";
    cin >> x;
    cout << "\nNhap y = ";
    cin >> y;
    cout << "\nNhap ky tu phep toan: ";
    cin >> ch;

    switch(ch)
    {
    case '/':
    case ':':
        cout << "\nKet qua phep toan chia giua x=" << x <<" va y=" << y <<" la: " << x/y << endl;
        break;
    case '+':
        cout << "\nKet qua phep toan cong giua x=" << x <<" va y=" << y <<" la: " << x+y << endl;
        break;
    case '-':
        cout << "\nKet qua phep toan tru giua x=" << x <<" va y=" << y <<" la: " << x-y << endl;
        break;
    case '*':
        cout << "\nKet qua phep toan nhan giua x=" << x <<" va y=" << y <<" la: " << x*y << endl;
        break;
    default:cout << "\nKy tu vua nhap khong phai la phep toan" << endl;
    }
    return 0;
}
