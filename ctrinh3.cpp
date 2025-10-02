#include<iostream>
using namespace std;


/*
Viet chuong trinh giai va bienluan cac phuong trinh, he phương trinh sau
1. ax + b = 0
2. ax^2 + bx + c = 0
Voi a, b, c la so thuc nhap tu ban phim

3. Coi a, b, c la ba canh cua mot tam giac.
Tinh chu vi, dien tich cua tam giac do
4. Cho biet tam giac do la loai tam giac gi: deu, can, thuong, vuong, vuong can
*/

int main()
{
    //1. ax + b = 0
    float a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem\n";
        else
            cout << "Phuong trinh vo nghiem\n";
    }
    else //a != 0
    {
        float x = -b / a;
        cout << "Nghiem cua phuong trinh la: " << x << endl;
    }



    //2. ax^2 + bx + c = 0
    float c;
    cout << "Nhap c: ";
    cin >> c;
    if (a == 0)
    {
        if (b == 0)
            if (c == 0)
                cout << "Phuong trinh vo so nghiem\n";
            else
                cout << "Phuong trinh vo nghiem\n";
        else
            {
                float x = -c / b;
                cout << "Nghiem cua phuong trinh la: " << x << endl;
            }

    }
    else{
        float delta = b*b- 4*a*c;
        if (delta < 0)
            cout << "Phuong trinh vo nghiem\n";
        else if (delta == 0)
        {
            float x = -b / (2*a);
            cout << "Phuong trinh co nghiem kep: " << x << endl;
        }
        else
        {
            float x1 = (-b + delta*0.5 / (2*a)); 
            float x2 = (-b - delta*0.5 / (2*a));
            cout << "Phuong trinh co hai nghiem phan biet: " << x1 << ", " << x2 << endl;
        }
    }



    //3. Coi a, b, c la ba canh cua mot tam giac.
    //Tinh chu vi, dien tich cua tam giac do
    float p, s;
    p = (a + b + c) / 2; //nua chu vi cua tam giac
    s = (p*(p-a)*(p-b)*(p-c))*0.5; //cong thuc tinh dien tich tam giac theo 3 canh a, b, c
    cout << "Chu vi tam giac la: " << 2*p << endl;
    cout << "Dien tich tam giac la: " << s << endl;



    //4. Cho biet tam giac do la loai tam giac gi: deu, can, thuong, vuong, vuong can
    if (a == b && b == c)
        cout << "Tam giac deu" << endl; // ba canh a b c bang nhau
    else if (a == b || b == c || a == c) // hai canh bang nhau
        // khi co hai canh bang nhau, kiem tra xem no co goc vuong khong
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) //cong thuc pytago, neu True tuc la tam giac co mot goc vuong
            cout << "Tam giac vuong can" << endl;
        else
            cout << "Tam giac can" << endl;
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) //cong thuc pytago, neu True tuc la tam giac co mot goc vuong
        cout << "Tam giac vuong" << endl;
    else
        cout << "Tam giac thuong" << endl; // sau khi loai bo cac truong hop tren thi con lai la tam giac thuong


    return 0;
}
