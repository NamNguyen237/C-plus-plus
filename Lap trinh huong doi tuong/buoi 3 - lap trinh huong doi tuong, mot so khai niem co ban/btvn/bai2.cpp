#include<iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
void findMax(int a, int b, int c, int &maxVal)
{
    maxVal = max(max(a, b), c);
}
void Nhap(int &a, int &b, int &c)
{
    cout << "\nNhap so nguyen a=";
    cin >> a;
    cout << "\nNhap so nguyen b=";
    cin >> b;
    cout << "\nNhap so nguyen c=";
    cin >> c;
}
void HienThi(int a, int b, int c)
{
    cout << "\na=" << a << ", b=" << b << ", c=" << c;
}
int main()
{
    int a, b, c, maxVal;
    Nhap(a, b, c);
    HienThi(a, b, c);
    findMax(a, b, c, maxVal);
    cout << "\nSo lon nhat trong 3 so la: " << maxVal << endl;
    return 0;
}