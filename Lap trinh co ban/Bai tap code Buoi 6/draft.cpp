#include <iostream>
using namespace std;
int main()
{
    int n;
    double S = 1.0;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n<=0);
    for (int i=1;i<=n;i++) {
        S += 1.0/(2*i+1);
    } cout << "S = " << S;
    return 0;
}

