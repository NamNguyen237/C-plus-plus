#include<bits/stdc++.h>
using namespace std;

class Employee {
private:
    char *ten;
    int tuoi;
    float luong;
public:
    //Câu 14
    Employee() {
        ten = new char[1];
        strcpy(ten, "");
        tuoi = 18;
        luong = 100.0f;
    }

    //Câu 15
    Employee(const char *t, int a, float s) {
        ten = nullptr;
        setTen(t);
        setTuoi(a);
        setLuong(s);
    }

    //Câu 13
    void setTen(const char *t);
    char * getTen();

    void setTuoi(int a);
    int getTuoi();

    void setLuong(float s);
    float getLuong();

    //Câu 16
    void show();

    //Câu 17
    ~Employee();
};

//Câu 17
Employee::~Employee() {
    if (ten!=nullptr) {
        delete[] ten;
        ten = nullptr;
    }
}
//Câu 16
void Employee::show() {
    cout << "Ten: " << ten << endl;
    cout << "Tuoi: " << tuoi << endl;
    cout << "Luong: $" << luong << endl;
}
//Câu 13
void Employee::setTen(const char *t) {
    if ( ten != nullptr ) {
        delete[] ten;
    }
    ten = new char[strlen(t)+1];
    strcpy(ten, t);
}
char * Employee::getTen() {
    return ten;
}

void Employee::setTuoi(int a) {
    tuoi = a;
}
int Employee::getTuoi() {
    return tuoi;
}

void Employee::setLuong(float s) {
    luong = s;
}
float Employee::getLuong() {
    return luong;
}

int main(){
    //Câu 18
    cout << "\nCau 18\n";
    Employee e;
    e.show();

    //Câu 19
    cout << "\nCau 19\n";
    char ten[100]; int tuoi; float luong;
    cout << "\nNhap ten nhan vien: ";
    cin.getline(ten, 100);
    e.setTen(ten);
    cout << "\nNhap tuoi nhan vien: ";
    cin >> tuoi;
    e.setTuoi(tuoi);
    cout << "\nNhap luong nhan vien: ";
    cin >> luong;
    e.setLuong(luong);
    e.show();

    //Câu 20
    cout << "\nCau 20\n";
    Employee c20("Nguyen Hong Nam", 19, 10);
    c20.show();

    //Câu 21
    cout << "\nCau 21\n";
    Employee *c21;
    c21 = new Employee("Nguyen Hong Nam", 19, 10);
    c21->show();
    

    //Câu 22
    cout << "\nCau 22\n";
    int n;
    do {
        cout << "\nNhap chieu dai mang dong n > 0: ";
        cin >> n;
    } while ( n <= 0 );
    Employee *c22;
    c22 = new Employee[n];
    for ( int i = 0; i < n; i++ ) {
        cout << "\nNhap thong tin nhan vien " << i+1 << endl;
        char t[100];
        int a;
        float s;
        cin.ignore();
        cout << "Ten: ";
        cin.getline(t,100);
        cout << "Tuoi: ";
        cin >> a;
        cout << "Luong: ";
        cin >> s;
        c22[i].setTen(t);
        c22[i].setTuoi(a);
        c22[i].setLuong(s);
    }
    for ( int i = 0; i < n; i++ ) {
        c22[i].show();
    }

    //Câu 23
    cout << "\nCau 23\n";
    int ChiSoBeNhat = 0;
    for ( int i = 1; i < n; i++ ) {
        if ( c22[i].getTuoi() < c22[ChiSoBeNhat].getTuoi() ) {
            ChiSoBeNhat = i;
        }
    }
    cout << "\nNhan vien tre nhat: " << endl;
    c22[ChiSoBeNhat].show();
    int ChiSoLonNhat = 0;
    for ( int i = 1; i < n; i++ ) {
        if ( c22[i].getTuoi() > c22[ChiSoLonNhat].getTuoi() ) {
            ChiSoLonNhat = i;
        }
    }
    cout << "\nNhan vien gia nhat: " << endl;
    c22[ChiSoLonNhat].show();
    
    //Câu 24
    cout << "\nCau 24\n";
    int ChiSoLuongCaoNhat = 0;
    for ( int i = 1; i < n; i++ ) {
        if ( c22[i].getLuong() > c22[ChiSoLuongCaoNhat].getLuong() ) {
            ChiSoLuongCaoNhat = i;
        }
    }
    cout << "\nNhan vien luong cao nhat: " << endl;
    c22[ChiSoLuongCaoNhat].show();
    int ChiSoLuongThapNhat = 0;
    for ( int i = 1; i < n; i++ ) {
        if ( c22[i].getLuong() < c22[ChiSoLuongThapNhat].getLuong() ) {
            ChiSoLuongThapNhat = i;
        }
    }
    cout << "\nNhan vien luong thap nhat: " << endl;
    c22[ChiSoLuongThapNhat].show();

    //Câu 25
    cout << "\nCau 25\n";
    char nhanVien[100];
    cin.ignore();
    cout << "\nNhap ten nhan vien can tim: ";
    cin.getline(nhanVien, 100);
    int found = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( strcmp(c22[i].getTen(), nhanVien ) == 0 ) {
            cout << "\nDa tim thay nhan vien so " << i+1 << ": " << nhanVien << endl;
            c22[i].show();
            found++;
        }
    }
    if ( found == 0 ) {
        cout << "\nKhong tim thay nhan vien " << nhanVien << endl;
    }

    delete c21;
    delete[] c22;
    return 0;
}