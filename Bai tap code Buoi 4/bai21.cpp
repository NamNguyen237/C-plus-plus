#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    cout << "\nNhap so n = ";
    cin >> n;
    float S;
    int tong = 0;
    for (i = 1; i <= n; i++)
    {
        tong += (i*i);
    }
    S = sqrt(tong);
    cout << "\nPhuong trinh S co ket qua la: " << S << endl;
    return 0;
}
