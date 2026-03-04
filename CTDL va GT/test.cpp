#include<iostream>
using namespace std;
int main(){
    int x[] = {5, 7, 3, 2, 9};
    int n = 5;
    int i;
    for (i = 0; i < (n-1); i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = 0;
            if (x[j] < x[i])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }                              
    return 0;
}