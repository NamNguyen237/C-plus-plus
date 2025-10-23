#include<iostream>
using namespace std;
int main()
{
    int n;
    int S2;
    S2 = 0;

    do{
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);

    int i;

    for (i = 3; i <= n; i++)
    {
        S2 = S2 + (i-2)*(i-1)*i;
    }
    cout << "\nGia tri cua S2 la: " << S2 << endl;

    return 0;
}
