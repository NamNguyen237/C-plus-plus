#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float a;
    float b;
    float c;
    float p;
    float s;
    bool pytago;
    cout << "Nhap so thuc a, b, c: ";
    cin >> a >> b >> c;
    p = a + b + c;
    cout << "Chu vi cua tam giac do la: " << p << endl;
    s = sqrt((p/2)*((p/2)-a)*((p/2)-b)*((p/2)-c)); // cong thuc heron
    cout << "Dien tich cua tam giac do la: " << s << endl;
    pytago = ((c*c == (a*a + b*b)) || (a*a == (c*c + b*b)) || (b*b == (a*a + c*c)));
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

    return 0;

}
