#include<iostream>
using namespace std;
int main()
{
    string str = "zendHvnh!";
    for (char& c : str) {
        if (c == 'h') {
            c = 'a';
        }
    }
    cout << str;
    return 0;   
}