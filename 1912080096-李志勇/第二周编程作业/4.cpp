#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,j,i,k,l,m,n;
    int x;
    cin>>a;
    b=a/50;
    a=a-b*50;
    c=a/20;
    a=a-c*20;
    d=a/10;
    a=a-d*10;
    e=a/5;
    a=a-e*5;
    cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<a;
    return 0;
}
