#include <iostream>
#include <array>
#include <string>
using namespace std;
int main()
{
    string str = "training";
array<int, 4> arrOne = {1, 2, 3, 4};
array<string, 4> result;

for(int i = 1; i < arrOne.size(); i++) {
    result[i] = str.substr(str.length() - i, 1) + "zendvn";
}

cout << result[arrOne[result.size() - 2]];
return 0;   
}