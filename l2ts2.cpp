#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
     long int a,s,d;
    cin>>a;
    cin>>s;
    
    int i=1;
    while(i<=min(a,s))
    {
        if((a%i==0)&&(s%i==0))
        {
            d=i;
        }
        i++;
    }
    cout<<d;
}
