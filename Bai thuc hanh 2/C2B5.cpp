#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    int i, j;
    do{
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while ( n <= 0 );

    cout << "\nNhung so nguyen to be hon n la: \n";
    for (i = 2; i < n; i++)
    {
        bool snt = true;
        for (j = 2; j <= sqrt(i); j++)
        {
            //kiem tra lieu co uoc nao ngoai 1 va i khong, neu co thi ko phai so nguyen to
            //luc do dat bien boolean so nguyen to thanh false va ket thuc vong lap
            if (i % j == 0)
            {
                snt = false;
                break;
            }
        }
        if (snt)
            cout << i << " ";
    }
    return 0;
}
