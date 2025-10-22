#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "\nNhap mot so nguyen duong n = ";
    cin >> n;
    string str = to_string(n);
    reverse(str.begin(), str.end());
    int num = std::stoi(str);
    cout << "\nSo da dao nguoc la: " << num << endl;
    return 0;
}
