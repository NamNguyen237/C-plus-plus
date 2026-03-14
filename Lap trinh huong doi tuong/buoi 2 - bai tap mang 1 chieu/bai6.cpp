#include<iostream>
using namespace std;

int tinhTongChuSo(int n) {
int tong = 0;
while (n > 0) {
	tong += n % 10;
	n /= 10;
}
return tong;
}

int main()
{
int daySo[100];
int n;
int soSDB = 0;
cout << "\nNhap n = ";
cin >> n;
for (int i = 0; i < n; i++)
{
	cout << "Nhap so nguyen vi tri " << i << " trong day: ";
	cin >> daySo[i];
}
for (int i = 0; i < n; i++) {
if ((daySo[i] > 0) && (daySo[i] % tinhTongChuSo(daySo[i]) == 0)) soSDB++;
}
cout << "\nDay tren co " << soSDB << " so dac biet";
return 0;
}
