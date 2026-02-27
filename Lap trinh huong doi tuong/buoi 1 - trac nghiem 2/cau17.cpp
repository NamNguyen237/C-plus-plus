#include<iostream>
using namespace std;
int main()
{
    for (int a = 1; a <= 5; a++) {
        if (a % 3 == 1) cout << a + 5;
        if (a == 5) a = 1;
        if (a == 4) break;
        if (a == 2) continue;
    }
    return 0;
}