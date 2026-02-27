#include<iostream>
using namespace std;
int main()
{
    for (int j = 0; j <= 10; j += 2)
    {
        if (j == 4) continue;
        if (j == 8) break;
        cout << 2*j;
    }
    return 0;
}