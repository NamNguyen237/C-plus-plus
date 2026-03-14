#include<iostream>
using namespace std;
int main()
{
    int arrInt[] = {1, 3, 6, 2, 4, 10, 12, 15, 22};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arrInt[arrInt[i]];
    }
    cout << sum;
    return 0;
}