#include<iostream>
using namespace std;
int main()
{
    int number = 5, sum = 0;
    do {
        sum+=number;
        number--;

    }
    while (number > 2);
    cout << "Sum: " << sum;
    return 0;
}