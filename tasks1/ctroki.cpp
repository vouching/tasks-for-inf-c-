#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string a,b,c,maxx;
    cin>>a>>b>>c;
    if((a.size()>b.size())&&(a.size()>c.size()))
    {
        maxx=a;
    }
    if((b.size()>c.size())&&(b.size()>a.size()))
    {
       maxx=b;;
    }
    if((c.size()>a.size())&&(c.size()>b.size()))
    {
        maxx=c;
    }
    cout<<maxx;
}
