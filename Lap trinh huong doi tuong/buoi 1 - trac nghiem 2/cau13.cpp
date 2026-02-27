#include<iostream>
using namespace std;
int main()
{
    int a;
    for (a = 2; a <= 7; a++)
    {
        if (a%3 == 0) continue;
        cout << a;
    }
    return 0;
}