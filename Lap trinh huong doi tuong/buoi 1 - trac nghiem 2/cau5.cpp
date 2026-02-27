#include<iostream>
using namespace std;
int main()
{
    int yourAge = 10;
    cout << yourAge++; //dùng trước, tăng sau
    cout << (++yourAge * 3); //tăng trước, dùng sau, do đã tăng 1 ở trên => 12 * 3 = 36
    return 0;
}