#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nNhap so nguyen n = ";
    cin >> n;

    double S = 0;
    for (int i = 1; i <= (2*n+1); i = i + 2)
    {
        int j = i+1;
        S += (double)i/j;
    }

    cout << "\nKet qua cua phep tinh S la: " << S << endl;
    return 0;
}
