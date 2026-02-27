#include<iostream>
using namespace std;

int main()
{
    double s, x, temp;
    int k;
    float epsilon = 0.000001;


    cout << "\nNhap x: ";
    cin >> x;


    s = 0;
    k = 0;
    temp = 1;

    while (temp >= epsilon)
    {
        cout << "\n" << k << ". " << temp << endl;
        s = s + temp;
        temp = temp * (x/(k+1));
        k++;

    }
    cout << "\nTong s = " << s << endl;



    return 0;
}
