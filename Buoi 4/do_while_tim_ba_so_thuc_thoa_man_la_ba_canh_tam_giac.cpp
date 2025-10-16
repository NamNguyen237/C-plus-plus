#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, cv, dt, p, S, maxVal;
    do {
        cout << "Nhap 3 so thuc a b c: ";
        cin >> a >> b >> c;
    } while (((a+b>c) && (b+c>a) && (c+a>b)) == false);
    cout << "\nBa so thuc tao thanh mot tam giac la: " << a << " " << b << " " << c << endl;

    cv = a + b + c;
    p = cv/2;
    dt = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "\nChu vi cua tam giac la: " << cv;
    cout << "\nDien tich cua tam giac la: " << dt;

    maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;

    if (a == maxVal)
        cout << "\nCanh lon nhat la canh a = " << maxVal;
    if (b == maxVal)
        cout << "\nCanh lon nhat la canh b = " << maxVal;
    if (c == maxVal)
        cout << "\nCanh lon nhat la canh c = " << maxVal;


    S = ( ( a + b - (2*c) ) + sqrt(a+b) ) / ( a*b + b*c + c*a );
    cout << "\nBieu thuc co ket qua la: " << S << endl;

    return 0;
}
