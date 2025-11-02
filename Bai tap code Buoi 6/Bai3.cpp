#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nNhap so nguyen n = ";
    cin >> n;

    double S = 0;
    for (int i = 2; i <= (2*n); i = i + 2)
    {
        S += (double)1/i;
    }

    cout << "\nKet qua cua phep tinh S la: " << S << endl;
    return 0;
}
