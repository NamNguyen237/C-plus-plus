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

    switch (gender)
    {
    case 0:
        cout << "\nGioi tinh: Nam";
        break;
    case 1:
        cout << "\nGioi tinh: Nu";
        break;
    default:
        cout << "\nBan thuoc the gioi thu 3";
    }

    return 0;
}
