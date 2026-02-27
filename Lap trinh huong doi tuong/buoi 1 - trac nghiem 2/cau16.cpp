#include<iostream>
using namespace std;
int main()
{
    int number = 5;
    while (number >= 2) {
        if (number == 1 || number == 3) {
            number--;
            continue;
        }
        cout << number << "-";
        number--;
    }
    return 0;
}

