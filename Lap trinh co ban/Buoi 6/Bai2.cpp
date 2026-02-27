#include<iostream>
using namespace std;

int main()
{
    int n;
    do{
        cout << "\nNhap so luong so nguyen tu ban phim n = ";
        cin >> n;
    } while (n <= 0);

    float x;
    float tongDuong = 0;
    float tongAm = 0;
    int slgDuong = 0;
    int slgAm = 0;
    int slgKhong = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nNhap so thu " << i << ": ";
        cin >> x;
        if (x > 0)
        {
            tongDuong += x;
            slgDuong++;
        }
        else if (x < 0)
        {
            tongAm += x;
            slgAm++;
        }
        else
            slgKhong++;
    }

    cout << "\nTong cac so duong trong cac so vua nhap la: " << tongDuong << endl;
    cout << "\nTrung binh cac so duong trong cac so vua nhap la: " << tongDuong/slgDuong << endl;

    cout << "\nTong cac so am trong cac so vua nhap la: " << tongAm << endl;
    cout << "\nTrung binh cac so am trong cac so vua nhap la: " << tongAm/slgAm << endl;

    cout << "\nSo luong so khong trong cac so vua nhap la: " << slgKhong << endl;

    return 0;
}
