#include<iostream>
using namespace std;

int main()
{
    float a, b, c, d, maxValue, minValue;
    cout << "Nhap 4 so thuc: ";
    cin >> a >> b >> c >> d;
    maxValue = a;
    if (b > maxValue)
        maxValue = b;
    if (c > maxValue)
        maxValue = c;
    if (d > maxValue)
        maxValue = d;
    minValue = a;
    if (b < minValue)
        minValue = b;
    if (c < minValue)
        minValue = c;
    if (d < minValue)
        minValue = d;
    cout << "\nGia tri lon nhat la: " << maxValue << endl;
    cout << "\nGia tri nho nhat la: " << minValue << endl;
    return 0;
}
