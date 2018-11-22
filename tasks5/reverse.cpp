
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
void rev(vector <int>& a)
{
	//cout<<" gg"; 
	for(int s=a.size()/2;s>=0;s--)
	{
		int y;
		y=a[a.size()-s];
		a[a.size()]=y;
		a[s]=y;
	}
}
void pr(const vector <int> as)
{
	unsigned int i=0;
    while(i<=as.size()-1)
    {
        cout<<as[i]<<" ";
        i++;
    }
    cout<<endl;
    
}
int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    //cout<<a.size();
    pr(a);
    rev(a);
   // unsigned int i=0 ;
    
    pr(a);
    
}

