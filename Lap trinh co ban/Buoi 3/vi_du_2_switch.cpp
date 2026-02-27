#include<iostream>
using namespace std;
int main()
{
    int ma;
    cout << "Nhap ma = ";
    cin >> ma;
    switch (ma)
    {
    case 1:
        cout << "So cap\n";
        break;
    case 2:
        cout << "Trung cap\n";
        break;
    case 3:
        cout << "Dai hoc\n";
        break;
    case 4:
        cout << "Cao hoc\n";
        break;
    case 5:
        cout << "Pho tien sy\n";
        break;
    case 6:
        cout << "Tien sy\n";
        break;
    default:
        cout << "Nhap sai\n";
    }
    return 0;
}
