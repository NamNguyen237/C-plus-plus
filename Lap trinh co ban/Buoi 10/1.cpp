#include<iostream>
#include<cmath>
using namespace std;
void Nhapmang(int a[], int n)
{
    int i;
    cout << "\nNhap " << n << " so nguyen:\n";
    for (i = 0; i < n; i++)
    {
        cout << "a["<<i<<"] = ";
        cin >> a[i];
    }
}
void Hienthi(int a[], int n)
{
    cout << "\nCac phan tu trong mang\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void Sapxep(int a[], int n)
{
    int i, j;
    for (i=0; i<(n-1); i++)
        for(j=i+1; j<n; j++)
            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int main()
{
    int N;
    int array[30];
    cout << "\nNhap so PT trong mang N = ";
    cin >> N;
    Nhapmang(array, N);
    Hienthi(array, N);
    Sapxep(array, N);
    Hienthi(array, N);
    return 0;
}
