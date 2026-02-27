#include<iostream>
using namespace std;

int main()
{
    int n;

    do {
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);

    int tongUoc;
    int i, j;
    cout << "\nCac so hoan thien nho hon n la: ";
    for (i = 2; i < n; i++)
    {
        tongUoc = 0;
        for (j = 1; j < i; j++)
        {
            if (i%j == 0)
                tongUoc += j;
        }
        if (tongUoc == i)
            cout << i << " ";
    }
    return 0;
}
