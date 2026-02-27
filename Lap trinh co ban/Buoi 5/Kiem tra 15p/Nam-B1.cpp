#include<iostream>
using namespace std;

int main()
{
    int n;
    int S1;
    S1 = 0;

    do{
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);

    int i;
    for (i = 2; i <= n; i++)
    {
        S1 = S1 + (i-1)*i;
    }
    cout << "\nGia tri cua S1 la: " << S1 << endl;

    return 0;
}
