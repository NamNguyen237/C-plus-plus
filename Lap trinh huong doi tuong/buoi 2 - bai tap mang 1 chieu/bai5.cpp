#include<iostream>
using namespace std;
int main()
{
float daySo[100];
int n;
cout << "Nhap so n = ";
cin >> n;
for (int i = 0; i < n; i++)
{
	cout << "Nhap so thuc o vi tri " << i << " trong day:";
	cin >> daySo[i];
}
int tong = 0;
for (int i = 0; i < n; i++)
{
	if (i % 2 == 0)
	{
		tong -= daySo[i];
	}
	else
	{
		tong += daySo[i];
	}
}
cout << "\nTong = " << tong;
return 0;
}
