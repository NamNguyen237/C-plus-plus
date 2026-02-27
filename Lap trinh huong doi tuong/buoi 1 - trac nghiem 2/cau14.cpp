#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 7) {
        i+= 3;
        if ( i == 6) {
            break;
        }
        cout << i;
    }
    return 0;
}