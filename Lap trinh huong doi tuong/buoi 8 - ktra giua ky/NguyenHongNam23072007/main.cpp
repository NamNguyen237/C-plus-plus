#include<bits/stdc++.h>
#include "sophuc.h"
using namespace std;

int main()
{
    Sophuc u, v;
    cout << "\nNhap so phuc u: ";
    cin >> u;
    cout << "\nNhap so phuc v: ";
    cin >> v;

    cout << "\nSo phuc u la: " << u << endl;
    cout << "\nSo phuc v la: " << v << endl;

    Sophuc t(u); //so phuc t sao chep u
    cout << "\nSo phuc t (sao chep u) la: " << t << endl;

    Sophuc tong = v + u;
    Sophuc tich = v * u;
    cout << "\nTong cua v va u la: " << tong << endl;
    cout << "\nTich cua v va u la: " << tich << endl;

    cout << "\nSo phuc v sau khi tang 1 don vi thuc la: " << ++v << endl;

}
