#include<iostream>
using namespace std;
int main()
{
    int n, x;
    int dayso[100];
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> dayso[i];
    }
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        if (dayso[i] > dayso[i + 1])
        {   
            temp = dayso[i];
            dayso[i] = dayso[i + 1];
            dayso[i + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x == dayso[i])
        {
            cout << "Phan tu " << x << " co trong day so o vi tri " << i << endl;
            return 0;
        }
    }
    cout << "Phan tu " << x << " khong co trong day so" << endl;
    return 0;
}