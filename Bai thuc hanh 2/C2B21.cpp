#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    do {
        cout << "\nNhap so n = ";
        cin >> n;
    } while (n <= 0);


    float tong = 0;
    float x;


    for (i = 1; i <= n; i++)
    {
        cout << "\nNhap so thu " << i << ": ";
        cin >> x;
        tong += x;
    }

    float S = sqrt(tong);
    cout << "\nPhuong trinh S co ket qua la: " << S << endl;
    return 0;
}
