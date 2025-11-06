#include<iostream>
#include<cmath>
using namespace std;

/*
Ham kiem tra so nguyen to
Ham dang bool True/false
*/

bool KTNT(int n)
{
    int i;
    for (i = 2; i<= (int)sqrt(n); i++)
        if (n & i == 0)
            return false;
    return true;
}
int main()
{

}
