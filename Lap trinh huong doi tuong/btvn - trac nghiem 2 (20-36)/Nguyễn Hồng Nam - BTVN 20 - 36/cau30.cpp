#include<iostream>
using namespace std;
string myPrint(string name, int age);

int main() {
    string name = "zendvn";
    int age = 7;
    string result = myPrint(name.append("-training"), age + 4);

    cout << result;

    return 0;
}

string myPrint(string name, int age) {
    return name.append("+") + to_string(age * 2);
}
