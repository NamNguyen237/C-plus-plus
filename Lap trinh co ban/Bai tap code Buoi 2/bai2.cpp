#include<iostream>
#include<math.h>
using namespace std;
//bai 2: nhap 3 so thuc a, b, c
//tim x tu bieu thuc ax^2 + bx + c

int main() {
    float a;
    float b;
    float c;
    float x;
    float x2;
    float delta;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    if (a==0){
        if (b==0)
            if (c==0)
                cout << "Vo nghiem";
            else
                cout << "Vo so nghiem";
        else
            x = -c/b;
            cout << "Nghiem cua phuong trinh la " << x << endl;
    }
    else {
        delta = b*b - (4.0*a*c);
        if (delta < 0)
            cout << "Vo nghiem";
        if (delta == 0) {
            x = -b/(2.0*a);
            cout << "Nghiem cua phuong trinh la " << x << endl;
        }
        if (delta > 0) {
            x = (-b + sqrt(delta))/(2.0*a);
            x2 = (-b - sqrt(delta))/(2.0*a);
            cout << "Phuong trinh co hai nghiem phan biet " << x << " va " << x2 << endl;
        }
    }
    return 0;
}
