#include<iostream>
using namespace std;

int main()
{
    string ten;
    int nam;
    cout << "Nhap ten cua ban: ";
    getline(cin, ten);

    cout << "Nhap nam sinh cua ban: ";
    cin >> nam;

    cout << "Chao ban " << ten << endl << "Nam nay ban " << 2025 - nam << " tuoi!\n";
    return 0;
}
