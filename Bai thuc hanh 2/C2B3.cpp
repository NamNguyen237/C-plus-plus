#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap so thuc a, b, c: ";
    cin >> a >> b >> c;
    if ((a+b > c) && (a+c > b) && (b+c > a)) // kiem tra a, b, c co tao thanh tam giac khong
    {

        // bien logic true/false pytago
        bool pytago = ((c*c == (a*a + b*b)) || (a*a == (c*c + b*b)) || (b*b == (a*a + c*c)));

        if (a==b && b==c)
            cout << "Tam giac nay la tam giac deu" << endl;
        else if (a==b || a==c || b==c)
            if (pytago)
                cout << "Tam giac nay la tam giac vuong can" << endl;
            else
                cout << "Tam giac nay la tam giac can" << endl;
        else if (pytago)
            cout << "Tam giac nay la tam giac vuong" << endl;
        else
            cout << "Tam giac nay la tam giac thuong" << endl;

    }
    else
        cout << "\na, b, c khong tao thanh mot tam giac" << endl;
    return 0;

}
