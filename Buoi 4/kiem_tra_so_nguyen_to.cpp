#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    do
    {
        cout << "Nhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);


    if (n < 2)
    {

        cout << "\nKhong phai so nguyen to" << endl;
        return 0;
    }


    for (i=2;i <= sqrt(n);i++)
        if (n % i == 0)
        {
            cout << "\nKhong phai so nguyen to" << endl;
            return 0;
        }
    cout << "\nLa so nguyen to" << endl;
    return 0;
}
