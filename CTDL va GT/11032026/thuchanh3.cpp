#include <iostream>
using namespace std;
void tinh_dt_cv(int a, int b, int &dt, int &cv)
{
    dt = a*b;
    cv = 2*(a+b);
}
int main()
{
    int a, b;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    int dt, cv=
    tinh_dt_cv(a, b, dt, cv);
    cout << "Dien tich = " << dt << endl;
    cout << "Chu vi = " << cv << endl;
    return 0;
}