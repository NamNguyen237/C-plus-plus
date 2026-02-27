#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nNhap so nguyen n = ";
    cin >> n;

    double S = 0;
    for (int i = 1; i <= n; i++)
    {
        S += (double)i/(i+1);
    }

    cout << "\nKet qua cua phep tinh S la: " << S << endl;
    return 0;
}
