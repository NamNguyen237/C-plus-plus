#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nNhap so nguyen duong n = ";
    cin >> n;

    double S = 1;
    for (int i = 2; i <= n; i++)
    {
        int j = i+1;
        S += (double)i/j;
    }

    cout << "\nKet qua cua phep tinh S la: " << S << endl;
    return 0;
}
