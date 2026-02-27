#include<iostream>
using namespace std;
int main()
{
    int age = 22;
    if (age == 18)
        cout << "Frontend";
    else if (age >= 22)
        cout << "Backend";
    else
        cout << "DevOps";
    return 0;
}