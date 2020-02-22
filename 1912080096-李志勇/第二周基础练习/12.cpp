#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    char a;
    int b;
    cin>>b;
    if(b<0)
    {
        b=-1*b;
        cout<<"-"<<b<<" ";
        cout<<"-"<<hex<<b<<" ";
        cout<<"-"<<oct<<b;
    }
    else
    {
        cout<<b<<" ";
        cout<<hex<<b<<" ";
        cout<<oct<<b;
    }
    return 0;
}
