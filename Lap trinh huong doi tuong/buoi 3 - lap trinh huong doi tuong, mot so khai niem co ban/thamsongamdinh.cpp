#include<iostream>
using namespace std;
void fct(int a, int b = 0)
{
    cout << "Tham so thu nhat " << a << endl;
    cout << "Tham so thu hai " << b << endl;
}
int main()
{
    int n = 10, m = 20;
    fct(n,m); //lời gọi thông thường, có 2 tham số
    fct(n); // lời gọi có 1 tham số
    return 0;
}