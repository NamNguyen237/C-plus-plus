#include<iostream>
#include<cmath>
using namespace std;

float giaithua(int n)
{
    if (n==0) return 1;
    else {
        //cout << "\nDe tinh " << n << "! thi can tinh " << n-1 << "!\n";
        int kq = giaithua(n-1);
        cout << "Lan " << (n-1) << " " << kq << "\n";
        return n*kq;
    }
}



int main() {
    int n;
    cout << "\nNhap n: ";
    cin >> n;
    cout << "\nGiai thua " << n << " la: " << giaithua(n) << "\n";
    //cout << "\nn = 15 thi tran so voi ham int\n";

return 0;
}