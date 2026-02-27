#include<iostream>
using namespace std;
int main()
{
    int x = 1;
    switch(x)
    {
        case 1: cout << "Admin";
        case 2: cout << "Manager ";
        default: cout << "Leader";
        return 0;
    }
}