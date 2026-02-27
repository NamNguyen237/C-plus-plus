#include<iostream>
using namespace std;
void Func1(int a, int *b)
{
}
void Func2(int *a, int *b)
{
}
void Func3(int *a, int b)
{
}
void Func4(int a, int b)
{
}
int main()
{
    int m = 1, n = 5;
    int *p1, *p2;
    p1 = &m;
    p2 = &n;
    Func1(m,&n);
    Func2(&m,&n);
    Func3(&m,n);
    Func4(m,n);

    Func1(*p1,p2);
    Func2(p1,p2);
    Func3(p1,*p2);
    Func4(*p1,*p2);

    Func1(*p1,&m);
    Func2(&n,p2);
    Func3(p1,m);
    Func4(m,*p2);
}
