#include<iostream>
#include<cmath>
using namespace std;

//De bai
/* Viet ham giai bien luan phuong trinh
bac nhat 1 an: ax + b = 0,
voi 2 tham so thuc a, b
*/

void GiaiPT(float a, float b)
{
    float x = (-b)/a;
    cout << "\nNghiem x cua phuong trinh ax + b = 0 la " << x << endl;
}
int main()
{
    float a, b;
    cout << "\nNhap 2 so thuc a, b cach nhau boi dau cach: ";
    cin >> a >> b;
    GiaiPT(a, b);
    return 0;
}
