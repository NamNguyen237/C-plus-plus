#include<iostream>
#include<cmath>
using namespace std;

void HoanDoi(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "a va b trong HoanDoi()" << endl;
    cout << "&a=" << &a << "\n&b=" << &b << endl;
    cout << "a va b sau khi hoan doi la: " << a << " " << b << endl;
}
int main()
{
    int a, b;
    cout << "\nNhap 2 so nguyen duong a, b: ";
    cin >> a >> b;
    cout << "a va b truoc khi hoan doi la: " << a << " " << b << endl;
    cout << "&a=" << &a << "\n&b=" << &b << endl;
    HoanDoi(a,b);
    cout << "a va b sau khi hoan doi la: " << a << " " << b << endl;
    return 0;
}
