#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, x, i, tongUoc;
    do{
        cout << "\nNhap so nguyen duong n = ";
        cin >> n;
    } while (n <= 0);
    cout << "\nCac so hoan thien nho hon n la: ";
    for (x = n; x > 0; x--){
        tongUoc = 0;
        for (i = 1; i < x; i++){
            if (x % i == 0)
                tongUoc += i;
        }
        if (tongUoc == x)
            cout << x << " ";
    }
    return 0;
}
