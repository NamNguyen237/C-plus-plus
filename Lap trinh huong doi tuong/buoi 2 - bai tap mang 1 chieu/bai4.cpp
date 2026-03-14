#include<iostream>
using namespace std;
int main()
{
    int daySo[100];
    int n;
    int tong = 0;
    cout << "Nhap n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so nguyen o vi tri " << i << " trong day: ";
        cin >> daySo[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((daySo[i] % 5 == 1) && (daySo[i] % 2 == 0))
        {
            tong += daySo[i];
        }
    }
    cout << "Tong cac so chia het cho 2 va chia du 1 cho 5 la: " << tong;
    return 0;
}
