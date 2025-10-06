#include<iostream>
using namespace std;

//bai 1: cho 2 so thuc a, b, tim x trong bieu thuc ax+b

int main(){
    float a;
    float b;
    float x;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a==0)
        if (b==0)
            cout << "Vo so nghiem";
        else
            cout << "Vo nghiem";
    else
        x = -b/a;
        cout << "Nghiem phuong trinh la " << x << endl;
    return 0;
}
