#include<iostream>
using namespace std;

int main()
{
    int n = 10; //Biến nguyên
    int *p; //Con trỏ nguyên
    cout << "\nn = " << n;
    cout << "\np = " << p;
    //Chp p trỏ vào n
    //hay p nhận địa chỉ của biến n
    p = &n;
    //In ra địa chỉ vùng nhớ của n
    cout << "\np = " << p;
    cout << "\n&n = " << &n;
    //In ra giá trị vùng nhớ của n
    cout << "\nn = " << n;
    cout << "\n*p = " << *p;

    int m = 0;
    p = &m;
    cout << "\nm = " << m;
    cout << "\n*p = " << *p;
    cout << "\np = " << p;
    cout << "\n&m = " << &m;
    return 0;
}
