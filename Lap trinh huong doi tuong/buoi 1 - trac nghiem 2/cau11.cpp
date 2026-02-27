#include<iostream>
using namespace std;
int main()
{
    int number = 6;
    string result = "";

    switch (number)
    {
        case 5:
            result = "7";
        case 6:
            result = "5";
        case 7:
            result = "8";
            break;
        default:
            result = "default";
    }
    cout << result;
    return 0;
}