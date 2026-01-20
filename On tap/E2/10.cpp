#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    int sodao = 0;
    while (n > 0)
    {
        int temp = n % 10;
        sodao = sodao * 10 + temp;
        n = n / 10;
    }
    cout << "So dao la: " << sodao;
    return 0;
}