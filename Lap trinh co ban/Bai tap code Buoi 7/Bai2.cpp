#include<iostream>
#include<cmath>
using namespace std;
bool SNT(int k)
{
    int i;
    for (i = 2; i <= (int)sqrt(k); i++)
        if (k % i == 0)
            return false;
    return k>1;
}

int main()
{
    int m;
    do {
        cout << "\nNhap so nguyen duong m = ";
        cin >> m;
    } while (m <= 0);
    cout << "\nCac so nguyen to be hon hoac bang m la:\n";
    for (int i = 1; i <= m; i++)
    {
        if (SNT(i))
            cout << " " << i;
    }
    return 0;
}
