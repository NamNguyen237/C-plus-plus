#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string str = "Training/Doing/__psd/luutruonghailan/zendVN.xyz";
    vector<string> arrStr;

size_t pos = 0;
while ((pos = str.find("/")) != string::npos) {
    string token = str.substr(0, pos);
    arrStr.push_back(token);
    str.erase(0, pos + 1);
}
arrStr.push_back(str);

cout << arrStr[2] + arrStr[0] << endl;
return 0;
}