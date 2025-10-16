#include<iostream>
#include<cmath>
using namespace std;

//So hoan hao la so co tong cac uoc nho hon bang chinh no
//Vi du: 6 co 1 2 3 la 3 uoc nho hon co tong bang 6
int main()
{
    int n, i, tong_uoc = 0;

    do {
        cout << "\nNhap n = ";
        cin >> n;
    } while (n <= 0);

    for (i=1; i<n; i++)
    {
        if (n%i == 0)
            tong_uoc = tong_uoc + i;
    }
    if (tong_uoc == n)
        cout << "\n" << n << " la so hoan hao" << endl;
    else
        cout << "\n" << n << " khong la so hoan hao" << endl;
    return 0;
}
