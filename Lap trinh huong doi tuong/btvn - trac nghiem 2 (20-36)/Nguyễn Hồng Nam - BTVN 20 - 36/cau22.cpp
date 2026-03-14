#include<iostream>
using namespace std;
int main()
{
    string arrCourseName[] = {"Backend", "Frontend", "Fulltime :))"};
    for (string courseName : arrCourseName)
    {
        cout << courseName << "-";
    }
    return 0;
}