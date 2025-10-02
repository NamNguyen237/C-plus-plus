#include<iostream>
using namespace std;

//ctrinh2:
//Nhap ten, nam sinh, gioi tinh (0: nam, 1: nu) cua ban.
//In ra ten, tuoi va gioi tinh cua ban.
//Neu ban la nam va >=20 tuoi thi in ra "Ban da du tuoi de ket hon",
//neu ban la nu va >=18 tuoi thi in ra "Ban da du tuoi de ket hon",
//nguoc lai in ra "Ban chua du tuoi de ket hon"

int main()
{
    string ten;
    int nam; //nam sinh
    short gender; // 0: nam, 1: nu
    cout << "Nhap ten cua ban: ";
    cin >> ten;

    cout << "Nhap nam sinh cua ban: ";
    cin >> nam;

    cout << "Nhap gioi tinh cua ban (0: nam, 1: nu): ";
    cin >> gender;

    int tuoi_cua_ban = 2025 - nam;

    cout << "Chao ban " << ten << endl << "Nam nay ban " << tuoi_cua_ban << " tuoi!\n";

    if (gender==0) {
        cout << "Gioi tinh: Nam\n";
        if (tuoi_cua_ban >= 20)
            cout << "Ban da du tuoi de ket hon";
        else
            cout << "Ban chua du tuoi de ket hon";
    }
    else if (gender==1) {
        cout << "Gioi tinh: Nu\n";
        if (tuoi_cua_ban >= 18)
            cout << "Ban da du tuoi de ket hon";
        else
            cout << "Ban chua du tuoi de ket hon";
    }
    else {
        cout << "Khong ton tai gioi tinh cua ban\n";
        cout << "Khong the ket luan";
    }

    return 0;
}
