#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    //string tenSV;
    short tuoiSV = 18;
    float chieucao;
    char nhommau;
    float canbachai;
    cout << "Bien tuoiSV: " << tuoiSV << endl;
    cout << "Chao cac ban!\n" << endl;

    cout << "\nNhap tuoi: ";
    cin >> tuoiSV;

    cout << "Nhap chieu cao:";
    cin >> chieucao;

    cout << "Nhap nhom mau: ";
    cin >> nhommau;

    cout << "\tTuoi: " << tuoiSV
        << "\tCC: " << chieucao
        << "\tNhom mau: " << nhommau;

    tuoiSV = tuoiSV + 4;
    //float BMI = cannang/(chieucao*chieucao);
    canbachai = sqrt(chieucao);
    return 0;
}
