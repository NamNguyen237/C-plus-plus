#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Nhap tuoi: ";
    cin >> age;
    while ((age<=0) || (age>=130))
    {
        cout << "\nNhap lai tuoi: ";
        cin >> age;
    }
    cout << "\nBan da nhap tuoi = " << age;
    return 0;
}
