#include<iostream>
#include<cmath>
using namespace std;

void Nhap(double &a, double &b, double &c)
{
    cout << "\nNhap so thuc a, b, c cach nhau boi dau cach: ";
    cin >> a >> b >> c;
}
void GiaiPTBac2(double a, double b, double c) //ax^2 + bx + c = 0
{
    double x;
    if (a == 0) // bx + c = 0
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "\nPhuong trinh co vo so nghiem";
            else
                cout << "\nPhuong trinh vo nghiem";
        }
        else
        {
            x = -c/b;
            cout << "\nPhuong trinh ton tai 1 nghiem la x = " << x << endl;
        }
    }
    else
    {
        double delta = b*b - 4*a*c;
        if (delta < 0)
            cout << "\nPhuong trinh vo nghiem";
        else if (delta == 0)
        {
            x = -b/(2*a);
            cout << "\nPhuong trinh co nghiem kep la x = " << x << endl;
        }
        else
        {
            double x1 = ( -b + sqrt(delta) )/(2*a);
            double x2 = ( -b - sqrt(delta) )/(2*a);
            cout << "\nPhuong trinh co hai nghiem phan biet la x1 = " << x1
            << ", x2 = " << x2 << endl;
        }
    }
}

void GiaiPTTrungPhuong(double a, double b, double c) // ax^4 + bx^2 + c = 0
{
    // đặt t = x^2, từ đó rút gọn về được phương trình bậc 2
    if (a == 0) // bx^2 + c = 0 <=> bt + c = 0
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "\nPhuong trinh trung phuong co vo so nghiem";
            else
                cout << "\nPhuong trinh trung phuong vo nghiem";
        }
        else
        {
            double t = -c/b;
            if (t < 0)
                cout << "\nPhuong trinh trung phuong vo nghiem";
            else if (t == 0)
                cout << "\nPhuong trinh trung phuong co nghiem x = 0";
            else
            {
                cout << "\nNghiem cua x^2 la " << t << endl;
                cout << "\n\t=> Nghiem x cua phuong trinh trung phuong = " << sqrt(t) << " va " << -sqrt(t) << endl;
            }
        }
    }
    else
    {
        double delta = b*b - 4*a*c;
        if (delta < 0)
            cout << "\nPhuong trinh trung phuong vo nghiem";
        else
        {
            double t1 = ( -b + sqrt(delta) )/(2*a);
            double t2 = ( -b - sqrt(delta) )/(2*a);
            cout << "\nCo 2 gia tri x^2 la " << t1 << " va " << t2 << endl;
            if (t1 >= 0)
            {
                cout << "\nNghiem x^2 thoa man phuong trinh trung phuong tren la " << t1 << endl;
                cout << "\n\t=> Nghiem x cua phuong trinh trung phuong = " << sqrt(t1) << " va " << -sqrt(t1) << endl;
            }
            if (t2 >= 0)
            {
                cout << "\nNghiem x^2 thoa man phuong trinh trung phuong tren la " << t2 << endl;
                cout << "\n\t=> Nghiem x cua phuong trinh trung phuong = " << sqrt(t2) << " va " << -sqrt(t2) << endl;
            }
            if (t1 < 0 && t2 < 0)
            {
                cout << "\nPhuong trinh trung phuong vo nghiem";
            }
        }
    }
}


int main()
{
    double a, b, c;
    Nhap(a,b,c);
    cout << "a=" << a << " b=" << b << " c=" << c;
    GiaiPTBac2(a,b,c);
    GiaiPTTrungPhuong(a,b,c);
    return 0;
}

