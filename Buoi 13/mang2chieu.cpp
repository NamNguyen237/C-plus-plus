#include<iostream>

using namespace std;

void Nhap(float a[][20], int m, int n)
{
    int i = 0, j = 0;
    cout << "\nNhap ma tran " << m*n << " so thuc: ";
    while (i < m)
    {
        while (j < n)
        {
            cin >> a[i][j];
            j++;
        }
        i++;
    }
}
void Hienthi(float a[][20], int m, int n)
{
    int i = 0, j = 0;
    while ( i < m )
    {
        while ( j < n )
        {
            cout << a[i][j] << " ";
            j++;
        }
        i++;
        cout << "\n";
    }
}
float minArray(float a[][20], int m, int n)
{

}
void InNT(float a[][20], int m, int n)
{
    
}
int main()
{
    float matrix[20][20];
    int sohang, socot;
    cout << "\nNhap so hang va so cot cua ma tran: ";
    cin >> sohang >> socot;
    Nhap(matrix,sohang,socot);
    Hienthi(matrix,sohang,socot);
}