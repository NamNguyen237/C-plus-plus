#include<iostream>
using namespace std;

int main()
{
    double s, x, temp;
    int n, k;
    cout << "\nNhap n: ";
    cin >> n;
    cout << "\nNhap x: ";
    cin >> x;
    s = 1;
    temp = 1;

    for (k = 0; k <= n; k++)
    {
        temp = temp * (x/(k+1));
        s + s + temp;
    }
    cout << "\nTong s = " << s << endl;



    return 0;
}
