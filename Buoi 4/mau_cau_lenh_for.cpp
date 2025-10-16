#include<iostream>
using namespace std;
int main()
{
    int n, i;
    do {
        cout << "\nNhap n = ";
        cin >> n;
    } while (n <= 0);
    cout << "\nNhung so tu 1 den n la: ";
    for (i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
    cout << "\nNhung so tu n ve 1 la: ";
    for (i = n; i >= 1; i = i - 1)
        cout << i << " ";
    cout << "\n";
    return 0;
}
