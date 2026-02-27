#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, tong;
    do{
        cout << "\nNhap so nguyen n = ";
        cin >> n;
    } while (n <= 0);
    string str = to_string(n);
    tong = 0;
    for (char c : str){
        int d = c - '0';
        tong += d;
    }
    cout << "\nTong cac chu so cua so " << n << " la: " << tong << endl;
    return 0;
}
