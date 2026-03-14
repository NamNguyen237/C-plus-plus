#include<iostream>
using namespace std;
int main()
{
    string str = "ZendVN PHP Nodejs";
    string word = "ok";
    cout << str.substr(0, 2) + word + str.substr(3) << endl;
    return 0;
}