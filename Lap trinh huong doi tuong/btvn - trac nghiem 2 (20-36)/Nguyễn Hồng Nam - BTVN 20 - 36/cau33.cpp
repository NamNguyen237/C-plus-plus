#include<iostream>
using namespace std;
int main()
{
    int arrOne[] = { 1, 2, 3, 4, 5, 6 };
string arrTwo[] = { "d", "c", "a" };
string result = "";

for(int i = 0; i < sizeof(arrTwo) / sizeof(arrTwo[0]); i++) {
    result += to_string(arrOne[i]) + arrTwo[i] + to_string(arrOne[i+1]);
}

cout << static_cast<char>(result.at(result.length()-2)) << "LVK";
return 0;   
}