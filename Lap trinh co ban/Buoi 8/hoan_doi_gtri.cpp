#include<iostream>
#include<cmath>
using namespace std;

void HoanDoi(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void Hoandoi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    //cout << "\nNhap 2 so nguyen duong a, b: ";
    //cin >> a >> b;
    a = 1, b = 100;
    cout << "a va b truoc khi hoan doi la: " << a << " " << b << endl;
    Hoandoi(&a,&b); //tham số hình thức của hàm là con trỏ
                    //thì tham số thực tương ứng phải là một địa chỉ
    cout << "a va b sau khi hoan doi la: " << a << " " << b << endl;
    //HoanDoi(a,b);
    return 0;
}
