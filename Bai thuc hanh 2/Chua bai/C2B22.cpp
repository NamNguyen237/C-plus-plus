#include<iostream>
using namespace std;

int main()
{
    int t1, t2, t5;
    long tongtien = 200000;
    cout << "\nNhap so tien ban muon nhan: ";
    cin >> tongtien;

    cout << "\n\t1000d\t2000d\t5000d";

    for (t1 = 0; t1 <= tongtien/1000; t1++)
    {
        for (t2 = 0; t2 <= tongtien/2000; t2++)
        {
            for (t5 = 0; t5 <= 40; t5++)
            {
                if (t1*1000  + t2*2000 + t5*5000 == tongtien)
                    cout << "\n\t" << t1 << "\t" << t2 << "\t" << t5 << endl;
            }
        }
    }
    return 0;
}
