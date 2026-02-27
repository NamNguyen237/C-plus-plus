#include<iostream>
using namespace std;

int main()
{
    int month, year;
    cout << "Nhap month va year: ";
    cin >> month >> year;
    while ((month<1) || (month>12))
        cout << "\nThang khong hop le, vui long nhap lai: \n";
        cin >> month >> year;
    switch (month)
    {
    case 2:
        {
            if ((year%4) == 0 && (year%100) != 0)
                cout << "\nThang " << month << " nam " << year << " co 29 ngay\n";
            else
                cout << "\nThang " << month << " nam " << year << " co 28 ngay\n";
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "\nThang " << month << " nam " << year << " co 30 ngay\n";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "\nThang " << month << " nam " << year << " co 31 ngay\n";
        break;
    }
    return 0;
}
