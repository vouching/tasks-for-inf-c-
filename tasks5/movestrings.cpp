#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
void move(vector <string>&a,vector <string>& b)
{
    for (auto i:a)
    {
        b.push_back(i);
    }
    a.clear();
}
void pr(const vector <string>& as)
{
    for (auto i:as)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <string> a={"a","s","s",};
    vector <string> s={"z",};
    pr(a);
    pr(s);
    move(a,s);
    pr(a);
    pr(s);
}