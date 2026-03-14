#include<iostream>
using namespace std;
bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int daySo[100];
    int n;
    int soSNT = 0;
    cout << "Nhap n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so nguyen o vi tri " << i << " trong day: ";
        cin >> daySo[i];
	if (snt(daySo[i])) soSNT++;
    }
    cout << "So SNT trong day la: " << soSNT;
return 0;
}

