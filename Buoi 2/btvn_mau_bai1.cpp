#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Nhap 2 so thuc a, b: ";
    cin >> a >> b;
    if (a!=0)
        cout << "PT co 1 nghiem: " << -b/a << endl;
    else //a==0
        if (b==0)
            cout << "PT vo so nghiem\n";
        else //a=0, b != 0
            cout << "PT vo nghiem\n";
    
}