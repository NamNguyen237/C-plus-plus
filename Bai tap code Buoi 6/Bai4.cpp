#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nNhap so nguyen n = ";
    cin >> n;

    double S = 1;
    for (int i = 3; i <= (2*n+1); i = i + 2)
    {
        S += (double)1/i;
    }

    cout << "\nKet qua cua phep tinh S la: " << S << endl;
    return 0;
}
