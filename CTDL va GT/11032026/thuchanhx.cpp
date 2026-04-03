#include<iostream>
using namespace std;
int main()
{
    int x, *p;
    p = &x;
    x = 10;
    *p = 20;
    cout << x << endl;
}