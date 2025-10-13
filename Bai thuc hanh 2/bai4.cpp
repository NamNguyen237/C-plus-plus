#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int stn, c;
    bool check;
    cout << "Nhap mot so nguyen duong: ";
    cin >> stn;

    if (stn < 2) {
        cout << "Day khong la so nguyen to";
        return 0;
    }

    c = 2;
    check = true;

    while (c <= int(sqrt(stn)))
    {
        if (stn % c == 0) {
            cout << "\nDay khong la so nguyen to\n";
            check = false;
            break;
        }
        c++;
    }

    if (check)
        cout << "\nDay la so nguyen to\n";

    return 0;
}
