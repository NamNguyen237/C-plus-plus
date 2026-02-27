#include<iostream>
using namespace std;
int main()
{
    int yourNumber = 5;
    int yourAge = 18;
    string result = "JAVA";

    if (yourNumber % 2 == 0 || yourAge <= 30)
    {
        if (yourAge >= yourNumber * 2)
        {
            result = "JavaScript";
        }else{
            result = "Python";
        }
    } else {
        result = "C++";
    }

    cout << result;

    return 0;
}