#include<iostream>
#include<cmath>
using namespace std;

bool SNT(int k)
{
    int i;
    for (i = 2; i <= (int)sqrt(k); i++)
        if (k % i == 0)
            return false;
    return k>1;
}

int main() {
    int s;
    cout << "Nhap so chan s: ";
    cin >> s;
    for (int i = 2; i <= s/2; i++) {
        if (SNT(i) && SNT(s - i))
        {
            cout << i << " + " << s - i << " = " << s << endl;
            break;
        }
    }
    return 0;
}
