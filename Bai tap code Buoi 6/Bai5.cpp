#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nNhap so nguyen duong n = ";
    cin >> n;

    double S = 1;
    if (n == 1)
        S += 1.0/2.0;
    else
    {
         for (int i = 2; i <= n; i++)
        {
        int j = i+1;
        S += (double)i/j;
        }
    }


    cout << "\nKet qua cua phep tinh S la: " << S << endl;
    return 0;
}
