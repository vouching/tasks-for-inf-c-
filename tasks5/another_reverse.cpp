#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

void pr(const vector <int>& as)
{
	unsigned int i=0;
    while(i<=as.size()-1)
    {
        cout<<as[i]<<" ";
        i++;
    }
   cout<<"vyvod zakonchen"<<endl;
}
vector <int> rev (const vector <int>& a)
{   
	vector <int> b;
	unsigned int g=a.size()-1;
    int o=g;
    
    while(o>=0)
    {
    b.push_back(a[o]);
	o=o-1;
	}
    return b;
}
int main()
{
    vector <int> a;
    vector <int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    pr(a);
    b=rev(a);
    pr(b);
}


