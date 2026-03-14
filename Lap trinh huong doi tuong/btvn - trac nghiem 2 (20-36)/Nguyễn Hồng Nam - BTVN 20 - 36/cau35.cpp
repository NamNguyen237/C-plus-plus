#include<iostream>
using namespace std;
int main()
{
    string str = "javascript";
int arrOne[] = { 2, 3, 1 };
string result = "";

for (int i = 1; i < sizeof(arrOne) / sizeof(arrOne[0]); i++) {
    result += str[arrOne[i]];
}

cout << result;
return 0;
}