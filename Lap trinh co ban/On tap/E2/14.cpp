#include<iostream>

using namespace std;

int main()
{
    int n;
    float x;
    cout << "Nhap so nguyen n va so thuc x: ";
    cin >> n >> x;
    double S = 1;
    double temp = 1;
    for (int k = 1; k <= n; k++)
    {
        temp = temp * (x / k);
        S += temp;
    }
    cout << "Tong S la: " << S;
    double eps = 0.000001;
    
    return 0;
}