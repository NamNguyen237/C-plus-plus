#include<iostream>
using namespace std;
int main()
{
    int arrInt[] = {5, 4, 7, 2, 1};
    cout << arrInt[3] * arrInt[2] - arrInt[sizeof(arrInt)/sizeof(arrInt[0]) - 1];
    //2 * 7 - arrInt[(5/1) - 1] = 14 - arrInt[4] = 14 - 1 = 13
    return 0;
}