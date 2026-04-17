#include<bits/stdc++.h>
#include "vector.h"
using namespace std;

Vector::Vector(){ //vector co chieu = 5
    n = 5;
    a = new float[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
Vector::Vector(int k){ //vector co chieu = k
    n = k;
    a = new float[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
Vector::Vector(const Vector &v)
{
    //HTL sao chep
    n = v.n; //n: so chieu cua vector dang dc tao ra
    a = new float[n];
    for (int i = 0; i<n; i++)
        a[i] = v.a[i];
}
void Vector::Nhap(char *s){
    cout << "\nNhap " << n << " so thuc cho vector " << s <<": ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void Vector::Hienthi(char *s){
    cout << "\n" << s;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
Vector::~Vector(){
    delete(a);
}
float Vector::Tinhchuan(){
    float tongbinhphuong = 0;
    for(int i = 0; i < n; i++){
        tongbinhphuong += a[i] * a[i];
    }
    return sqrt(tongbinhphuong);
}
Vector Vector::Cong(const Vector &v)
{
    if (n == v.n)
    {
        Vector kq(n);
        for (int i = 0; i < n; i++)
            kq.a[i] = a[i] + v.a[i];

        return kq;
    }
    else
        return Vector(0);
}

Vector Vector::Tru(const Vector &v){
    Vector temp;
    temp.n = n;
    temp.a = new float[n];
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] - v.a[i];
    }
    return temp;
}

Vector Vector::TichVoHuong(const Vector &v){
    Vector temp;
    temp.n = n;
    temp.a = new float[n];
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] * v.a[i];
    }
    return temp;
}

Vector Vector::NhanSoThuc(float x){
    Vector temp;
    temp.n = n;
    temp.a = new float[n];
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] * x;
    }
    return temp;
}


