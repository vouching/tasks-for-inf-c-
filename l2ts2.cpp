#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a,s,d;
    cin>>a>>s;
    int i=1;
    while(i<min(a,s))
    {
        if((a%i==0)&&(s%i==0))
        {
            d=i;
        }
        i++;
    }
    cout<<d;
}
