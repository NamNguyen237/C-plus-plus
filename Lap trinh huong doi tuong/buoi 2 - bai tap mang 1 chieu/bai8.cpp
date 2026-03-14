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
     int n, m;
     cout << "Nhap n = ";
     cin >> n;
     cout << "Nhap m = ";
     cin >> m;
     for (int i = 0; i < m; i++)
     {
         cout << "Nhap so nguyen o vi tri " << i <<
   " trong day: ";
         cin >> daySo[i];
     }
     for (int i = 0; i < m; i++)
     {
	if (n % daySo[i] == 0 && snt(daySo[i]))
	     cout << "So " << daySo[i] << " thoa man\n";
	else cout << "So " << daySo[i] << " khong thoa man\n";
     }
return 0;
}
