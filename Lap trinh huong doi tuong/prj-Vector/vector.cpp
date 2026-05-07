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
    delete[] a;
}
float Vector::Tinhchuan(){
    float tongbinhphuong = 0;
    for(int i = 0; i < n; i++){
        tongbinhphuong += a[i] * a[i];
    }
    return sqrt(tongbinhphuong);
}

Vector Vector::operator+(const Vector &v) //cong
{
    if (n == v.n) //check 2 vector cung chieu
    {
        Vector kq(n);
        for (int i = 0; i < n; i++)
            kq.a[i] = a[i] + v.a[i];

        return kq;
    }
    else
        return Vector(0); //khi 2 vector ko cung chieu, tra ve vector 0
}
/*
Vector Vector::operator-(const Vector &v){ //tru
    Vector temp;
    temp.n = n;
    temp.a = new float[n];
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] - v.a[i];
    }
    return temp;
}
Vector Vector::operator*(const Vector &v){ //tich vo huong (vector nhan vector)
    Vector temp;
    temp.n = n;
    temp.a = new float[n];
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] * v.a[i];
    }
    return temp;
}

*/
//Chua lai:
Vector Vector::operator-(const Vector &v){ //tru
    if (n == v.n) //check 2 vector cung chieu
    {
        Vector kq(n);
        for (int i = 0; i < n; i++)
            kq.a[i] = a[i] - v.a[i];

        return kq;
    }
    else
        return Vector(0); //khi 2 vector ko cung chieu, tra ve vector 0
}

float Vector::operator*(const Vector &v){
    if (n==v.n) {
        float s = 0;
        for (int i = 0; i < n; i++)
            s += a[i]*v.a[i];
        return s;
    }
    else return -FLT_MAX; //am vo cung

}


Vector Vector::operator*(float x){ //nhan so thuc
    //Vector temp;
    //temp.n = n;
    //temp.a = new float[n];
    Vector temp(n);
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] * x;
    }
    return temp;
}

Vector operator*(float x, const Vector &v) {
    Vector kq(v.n);
    for (int i = 0; i < v.n; i++)
    {
        kq.a[i] = v.a[i] * x;
    }
    return kq;
}

Vector Vector::operator/(float x) {
    //Vector temp;
    //temp.n = n;
    //temp.a = new float[n];
    Vector temp(n);
    for(int i = 0; i < n; i++){
        temp.a[i] = a[i] / x;
    }
    return temp;
}

bool Vector::operator==(const Vector &v) {
    if (n == v.n)
    {
        for (int i = 0; i < n; i++) if (a[i] != v.a[i]) return false;
        return true;
    }
    return false;
}

bool Vector::operator!=(const Vector &v) {
    return !(*this == v);
}



//chồng phép hàm gán
Vector & Vector::operator=(const Vector &v) {
    delete(a);
    n = v.n;
    a = new float[n];
    for (int i = 0; i < n; i++)
        a[i] = v.a[i];
    return *this;
}

Vector & Vector::operator+=(const Vector &v) {
    if (n==v.n)
    {
       for (int i = 0; i < n; i++) a[i] += v.a[i];
    }
    return *this;
}


//chồng phép hàm tăng-giảm đơn vị
Vector & Vector::operator++() {
    for (int i = 0; i < n; i++) a[i]++;
    return *this;
}
Vector & Vector::operator++(int) {
    Vector temp;
    temp = *this;
    for (int i = 0; i < n; i++) a[i]++;
    return temp;
}

//chồng phép hàm xuất-nhập
//cout
ostream & operator<<(ostream & out, const Vector &v) {
    out << v.Data;
    return out;
}
//cin
istream & operator>>(istream & in, Vector &V) {
    in >> v.Data;
    return in;
}

