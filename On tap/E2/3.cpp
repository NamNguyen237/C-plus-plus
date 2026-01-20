#include<iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap 3 so thuc a b c: ";
    cin >> a >> b >> c;
    bool tamgiac = (((a+b) > c) && ((a+c) > b) && ((b+c) > a));
    if (tamgiac==true)
    {
        bool pytago = ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a));
        cout << "3 so tren co lap thanh mot tam giac.\n";
        if (a==b==c)
            cout << "Tam giac tren la tam giac deu.\n";
        else if ((a==b) || (a==c) || (b==c))
        {
            if (pytago == true)
                cout << "Tam giac tren la tam giac vuong can.\n";
            else 
                cout << "Tam giac tren la tam giac can.\n";
        }
        else if (pytago == true)
            cout << "Tam giac tren la tam giac vuong.\n";
        else
            cout << "Tam giac tren la tam giac thuong.\n";
    }
    else cout << "3 so tren khong lap thanh mot tam giac.\n";
    return 0;
}