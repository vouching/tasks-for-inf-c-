#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    int s,d,c;
    string a;
    int i=0;
    c=0;
    while(i<a.size())
    {
        if(a[i]=='f')
        {
            c=1;
        }
        if((a[i]=='f')&&(c==1))
        {
            c++;
            break;
        }
        i++;
    }
    if(c==1)
    {
        cout<<1;
    }
    if(c==0)
    {
        cout<<0;
    }
    if(c==2)
    {
        cout<<i;
    }
}