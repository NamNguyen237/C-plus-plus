#include<iostream>
using namespace std;
string createString(char c) {
    string s(1, c);
    return s + "a";
}

int main() {
    string str1 = createString('a');
    string str2 = createString('b');
    cout << str1 + "a" + str2 << endl;
    return 0;
}