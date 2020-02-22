#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l,m,n,z;
    cin>>a>>b>>c>>d>>e;
    z=a*d+b*e+c;
    z=(z<0?z=-z:z=z);
    c=sqrt(a*a+b*b);
    d=z/c;
    d=int(d*100+0.5)/100.00;
    cout<<d;
    return 0;
}
