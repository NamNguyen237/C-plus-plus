#include<iostream>
using namespace std;
int main()
{
    for (int a = 1; a <= 2; a++) {
        for (int b = 3*a-1; b > a; b--) {
            cout << a + b;
        }
    }
    return 0;
}