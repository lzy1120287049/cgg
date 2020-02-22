#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char a,b;
    int c;
    cin>>a;
    if(a>=97&&a<=122)
    {
         b=a-32;
        cout<<b;
    }
    else
        cout<<a;
    return 0;
}
