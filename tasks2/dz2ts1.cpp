#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    int c,x;
    string a;
    cin>>a;
    int i=0;
    c=0;
    x=a.size();
    while(i<x)
    {
        
        if((a[i]=='f')&&(c==1))
        {
            c++;
            
            break;
        }
        if(a[i]=='f')
        {
            c=1;
        }
        i++;
    }
    if(c==1)
    {
        cout<<1;
    }
    if(c==0)
    {
        cout<<2;
    }
    if(c==2)
    {
        cout<<i+1;
    }
}
