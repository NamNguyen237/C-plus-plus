#include<iostream>
using namespace std;

int main()
{
    int n, tongUoc;
    tongUoc = 0;

    do {
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while ( n <= 0);

    int i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            tongUoc += i;
    }

    if (tongUoc == n)
        cout << "\nDay la so hoan thien" << endl;
    else
        cout << "\nDay khong phai la so hoan thien" << endl;

    return 0;
}
