#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int so;

    do {
        cout << "Nhap mot so nguyen duong: ";
        cin >> so;
    } while (n <= 0);


    int c = 2;
    bool snt = true;

    //kiem tra lieu co uoc nao ngoai 1 va chinh no hay khong, neu co thi ko phai so nguyen to
    //luc do dat bien boolean so nguyen to thanh false va ket thuc vong lap
    while (c <= int(sqrt(so)))
    {
        if (so % c == 0) {
            snt = false;
            break;
        }
        c++;
    }

    if (snt)
        cout << "\nDay la so nguyen to\n" << endl;
    else
        cout << "\nDay khong la so nguyen to\n" << endl;

    return 0;
}
