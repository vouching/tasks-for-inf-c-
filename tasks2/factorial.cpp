#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int fac(int& a)
{
    
    int b,c;
    b=2;
    c=1;
    while(b<=a)
    {
        c=c*b;
        b++;
    }
    if(a>0)
    {
    a=c;
	}
	else
	{
	a=1;
    }
    return a;
}
int main()
{
    int f;
    cin>>f;
    f=fac(f);
    cout<<f<<endl;
}