#include <iostream>
#include <vector>
#include <map>
#include<set>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
    vector <vector <int>> a;
    int i=0;
    int j=0;
    vector <int> d;
    cin>>i>>j;
    int y =0;
    int g=0;
    while(y<i)
    {   a.push_back(d);
        g=0;
        while(g<j)
        {   
            a[y].push_back(g);
            g++;
        }
        y++;
    }
    y=0;
    g=0;
    while(y<i){
        g=0;
        while(g<j)
        {
            cout<<a[y][g]<<" ";
            g++;
        }
        cout<<endl;
        y++;
    }
    y=0;
    g=0;
    vector <vector <int>> f;
    while(y<j)
    {   
        f.push_back(d);
        g=0;
        while(g<i)
        {   
            f[y].push_back(a[g][y]);
            g++;
        }
        y++;
    }
    y=0;
     while(y<j){
        g=0;
        while(g<i)
        {
            cout<<f[y][g]<<" ";
            g++;
        }
        cout<<endl;
        y++;
    }
}
