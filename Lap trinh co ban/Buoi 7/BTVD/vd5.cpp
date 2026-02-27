#include<iostream>
using namespace std;

/*De bai:
Viet ham kiem tra so k
co phai so hoan thien (hoan hao)
khong? In ra cac so hoan thien
<= 1000
*/


bool KTSHH(int k)
{
    int tong = 0;
    for (int i = 1; i < k; i++)
        if (k % i == 0)
            tong += i;
    return tong == k;
}
int main()
{
    int n;
    cout << "\nNhap so n: ";
    cin >> n;
    if (KTSHH(n))
        cout << "\nDay la so hoan hao.";
    else
        cout << "\nDay khong la so hoan hao.";
    cout << "\nCac so hoan hao <= 1000 la:" << endl;
    for (int i = 1; i <= 1000; i++)
        if (KTSHH(i))
            cout << "\t" << i;
    return 0;
}
