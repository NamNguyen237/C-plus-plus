#include<iostream>
using namespace std;
int main()
{
    int arrInt[] = {3, 1, 7};
    string arrString[] = {"A", "B", "C", "D"};
    int sumEven = 1;
    for (int i = 0; i < sizeof(arrInt) / sizeof(arrInt[0]); i++)
    {
        if (arrInt[i] % 2 == 0)
        {
            sumEven += arrInt[i];
        }
        arrString[i] += to_string(sumEven);
    }
    cout << arrString[0] << arrInt[1] << arrString[2];
    return 0;
}