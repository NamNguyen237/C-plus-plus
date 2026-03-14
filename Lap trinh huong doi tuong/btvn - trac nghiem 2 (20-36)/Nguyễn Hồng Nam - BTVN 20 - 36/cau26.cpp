#include<iostream>
using namespace std;
int main()
{
    string str1 = "rt";
    string str2 = "pl";
    str1 = str1 + str2;
    string str3 = "we";
    str1 += str3[1];
    cout << str1;
    return 0; 
}