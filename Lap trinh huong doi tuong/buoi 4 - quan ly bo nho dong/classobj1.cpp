#include<iostream>
#include<cmath>
using namespace std;
class Point {
    private:
        float x, y;
    public:
        // void Init(); //chi khai bao ham
        // vua khai bao vua dinh nghia:
        void Init()
        {
            cout << "\nNhap x: ";
            cin >> x;
            cout << "\nNhap y: ";
            cin >> y;
        }
        void Show();
        void Move(float dx, float dy);
        float distance(); // Khoang cach toi O

};

//Dinh nghia ben ngoai class:
void Point::Show()
{
    cout << "\nPoint::Show() => ";
    cout << "x = " << x << ", y = " << y << ")";
}

void Point::Move(float dx, float dy)
{
    cout << "\nPoint::Move() => ";
    cout << "dx = " << x << ", dy = " << y << ")";
    x += dx;
    y += dy;
}

float Point::distance()
{
    cout << "\nPoint::distance() => ";
    return sqrt(x*x + y*y);
}

int main()
{
    Point A, B; //Khai bao doi tuong thuoc lop do
    //Mot doi tuong se co moi thuoc tinh khai bao trong lop
    //Mot doi tuong se co moi phuong thuc khai bao trong lop
    //Cac du lieu do se rieng biet giua moi doi tuong
    A.Show();
    A.Init();
    A.Show();
    cout << "\nOA = " << A.distance();
    A.Move(1, -1);
    A.Show();
    B.Show();
    B = A;
    B.Show();
    cout << "\nOB = " << B.distance();
    /*
    cout << "\nHoanh do cua A: " << A.x; //Se loi vi x la private
    cout << "\nTung do cua A: " << A.y; //Se loi vi y la private
    */

    Point *p;
    p = &A;
    p->Show(); // tuong duong A.Show()
    p->Init(); // tuong duong A.Init()
    p->Show(); // tuong duong A.Show()
    p->Move(1, -1); // tuong duong A.Move(1, -1)
    
    
    return 0;
}