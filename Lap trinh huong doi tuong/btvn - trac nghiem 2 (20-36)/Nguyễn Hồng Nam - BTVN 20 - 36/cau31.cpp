#include<iostream>
using namespace std;
string myPrint(string name, int age) {
    return name + " " + to_string(age);
}

int main() {
    string name = "training ";
    int age = 77;
    string result = myPrint(name, age);
    cout << result << "-2023";
    return 0;
}