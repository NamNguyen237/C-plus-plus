#include<iostream>

using namespace std;

void Nhap(float *a, float *b, float *c)
{
    cout << "\nNhap 3 canh cua mot tam giac: ";
    cin >> *a >> *b >> *c;
}
void HienthiLoaiTamgiac(float a, float b, float c)
{
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        cout << "\nBa canh co do dai la: " << a << b << c << ".";
        bool pytago = ((c*c = b*b + a*a) || (b*b = c*c + a*a) || (a*a = b*b + c*c));
        if (a == b == c)
            cout << "\nDay la tam giac deu.";
        else if ((a == b) || (a == c) || (b == c))
            if (pytago) cout << "\nDay la tam giac vuong can.";
            else cout << "\nDay la tam giac can.";
        else if (pytago)
            cout << "\nDay la tam giac vuong.";
        else
            cout << "\nDay la tam giac thuong.";
    }
    else
        cout << "\nDay khong phai do dai 3 canh tam giac.";  
}
int main()
{
    float a, b, c;
    Nhap(&a, &b, &c);
    HienthiLoaiTamgiac(a,b,c);
    return 0;
}