#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "\na = " << a 
         << " tai dia chi = " << &a << endl;

    a = 20;
    cout << "\na = " << a 
      << " tai dia chi = " << &a << endl;

    int b[3] = {1, 2, 3};
    cout << "\n phan tu mang b[0] = " << b[0] 
       << " tai " << &b[0] << endl;
    cout << "\n phan tu mang b[1] = " << b[1] 
        << " tai " << &b[1] << endl;
     cout << "\n phan tu mang b[2] = " << b[2] 
           << " tai " << &b[2] << endl;

     int *p = &a;
     cout << "\na = " << *p 
         << " tai dia chi p = " << &p 
          << ", noi dung p = " << p << endl;

    char x = 'c';
    cout << "\nky tu bien x la: " << x << " tai dia chi: " << (void*)&x << endl;

    p = &b[0];
    cout << "\nphan tu mang b[0] = " << *p 
        << " tai dia chi p = " << &p 
        << ", noi dung p = " << p << endl;
    *p = 5;
    cout << "\nphan tu mang b[0] = " << *p 
        << " tai dia chi p = " << &p 
        << ", noi dung p = " << p << endl;  
    
    return 0;
}