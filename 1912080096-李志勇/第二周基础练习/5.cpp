#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a%4==0&&a%100!=0||a%400==0)
        cout<<"IsLeapYear";
    else
        cout<<"NotLeapYear";
    return 0;
}
