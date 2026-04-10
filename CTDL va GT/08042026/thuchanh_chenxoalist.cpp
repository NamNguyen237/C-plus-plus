#include<iostream>
using namespace std;

void chen(int a[], int &kichco, int vitri, int so)
{
    //kiem tra vi tri hop le
    if (vitri < 1 || vitri > kichco + 1) {
        cout << "\nVi tri khong hop le\n";
        return;
    }
    cout << "\nSo can chen: " << so;
    for (int j = kichco - 1; j >= vitri - 1; j--) {
        a[j+1] = a[j];
    }
    a[vitri-1] = so;
    cout << "\nDia chi cua so vua chen la: " << &a[vitri - 1];
    kichco++;
}
void xoa(int a[], int &kichco, int vitri, int &outVal)
{
    if (vitri < 1 || vitri > kichco-1) {
        cout << "\nVi tri khong hop le\n";
        return;
    }
    outVal = a[vitri - 1];
    cout << "\nDia chi cua so bi xoa la: " << &a[vitri - 1];
    for (int j = vitri - 1; j < kichco - 1; j++) {
        a[j] = a[j+1];
    }
    kichco--;
}
int main()
{
    int a[100];
    int n, i, v;
    cout << "\nNhap n = ";
    cin >> n;
    cout << "\nNhap danh sach mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "\nNhap vi tri chen i = ";
    cin >> i;
    cout << "\nNhap so v = ";
    cin >> v;
    chen(a, n, i, v);
    cout << "\nList sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "\nNhap vi tri xoa i = ";
    cin >> i;
    int val;
    xoa(a, n, i, val);
    cout << "\nSo bi xoa la: " << val;
    cout << "\nList sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

