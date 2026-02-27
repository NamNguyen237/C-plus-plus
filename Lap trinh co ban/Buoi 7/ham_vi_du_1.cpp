#include<iostream>
using namespace std;

int binhphuong(int k)
{
        int x = k*k;
        return x;
}

int main()
{
    int N = 10;
    for (int i = 0; i <= N; i++)
        cout << "\n" << binhphuong(i);
    return 0;
}
