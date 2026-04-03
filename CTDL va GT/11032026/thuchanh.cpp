#include<iostream>
using namespace std;
int main()
{
    int A[100] = {3, 7, 2, 9};
    int n = 4;
    int *p;
    for (int i = 0; i < n; i = i+2)
    {
        p = &A[i];
        int temp = *p;
        *p = A[i+1];
        A[i+1] = temp;

    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }   
    return 0;
}