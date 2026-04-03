#include<iostream>
#include<cmath>
using namespace std;

class Sophuc {
    private: 
        float thuc, ao;
    public:
        void Nhap();
        void Hienthi();
        Sophuc Cong(Sophuc z);
        Sophuc Tru(Sophuc z);
        Sophuc Nhan(Sophuc z);
        Sophuc Chia(Sophuc z);

};

void Sophuc::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}
void Sophuc::Hienthi()
{
    //cout << thuc << "+" << ao << "*i";
    cout << thuc << (ao>=0? " + " : " - ") << fabs(ao) << "*i \n";

}

int main() {
    Sophuc z1, z2;
    z1.Nhap();
    z1.Hienthi();
    z2.Nhap();
    z2.Hienthi();

}