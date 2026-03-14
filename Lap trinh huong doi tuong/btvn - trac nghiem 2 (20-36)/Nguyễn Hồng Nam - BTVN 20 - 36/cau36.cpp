#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str = "zendvn";
int arrOne[] = { 1, 2, 3, 4, 5 };
vector<string> result = { "s", "c", "a", "b" };

for (int i = 1; i < sizeof(arrOne) / sizeof(arrOne[0]); i += 2) {
    result[i] += str[str.length() - i];
}

cout << result[0];

for (int i = 1; i < result.size(); i++) {
    cout << "-" << result[i];
}
return 0;
}