#include<iostream>
using namespace std;
int main()
{
    int arrInt[] = {6, 5, 4, 3, 2, 1};
    cout << arrInt[arrInt[arrInt[arrInt[2]]]];
    return 0;
}