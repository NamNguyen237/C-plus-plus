#include <bits/stdc++.h>
#include "point.h"
using namespace std;

int main()
{
    Point A, B(3, 4);
    A.Show("A");
    B.Show("B");
    A.Init("A");
    A.Show("A");
    //goi ham thanh phan cua lop
    if (A.coincide(B) == true) cout << "\n2 diem trung nhau";
    else cout << "\n2 diem khong trung nhau";

    //goi ham tu do
    if (coincide(A,B)) cout << "\n2 diem trung nhau";
    else cout << "\n2 diem khong trung nhau";

    A.Distance();
    A.Distance(B);

    return 0;
}
