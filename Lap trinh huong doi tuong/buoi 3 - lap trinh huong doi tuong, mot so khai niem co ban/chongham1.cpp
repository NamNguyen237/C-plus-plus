#include<iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}
int max(int a, int b, int c)
{
    return max(max(a, b),c);
}
void max(int a[100], int n)
{
    int lonnhat;
    for (int i = 1; i < n; i++)
    {
        lonnhat = a[i];
        if (a[i-1] > lonnhat) lonnhat = a[i-1];
    }
    cout << "\n";
    cout << lonnhat;
    cout << "\n";
}
int main()
{
    int a = 10, b = 12, c = 24;
    int n = 5;
    int A[100] = {1, 2, 3, 4, 5};
    cout << "\n" << max(a, b);
    cout << "\n" << max(a, b, c);
    max(A, n);
    return 0;
}