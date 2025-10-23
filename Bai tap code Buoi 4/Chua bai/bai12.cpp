#include<iostream>
using namespace std;

int main()
{
    int tu, mau, a, b, ucln;
    do{
    cout << "\nNhap tu so: ";
    cin >> tu;
    } while(tu <= 0);

    do{
    cout << "\nNhap mau so: ";
    cin >> mau;
    } while(mau <= 0);

    a = tu;
    b = mau;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        if (b > a)
            b = b - a;
    }
    ucln = a;
    int bcnn = (tu*mau)/ucln;
    cout << "\nUCLN la: " << ucln << endl;
    cout << "\nBCNN la: " << bcnn << endl;
    cout << "\nPhan so toi gian cua phan so " << tu << "/" << mau
    << " la " << tu/ucln << "/" << mau/ucln << endl;
    return 0;
}
