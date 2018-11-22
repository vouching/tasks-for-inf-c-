#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
bool comp(int a, int b)
{
	if(abs(a)<=abs(b))
	{return 1;}
	else
	{return 0;}
}
void pr(const vector <int>& as)
{
    for (auto i:as)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
	int n;
	int y;
	vector <int> as;
	int i=0;
	cin>>n;
	while(i<n)
	{
		
		cin>>y;
		as.push_back(y);
		i++;
	}
	sort(as.begin(),as.end(),comp);
	pr(as);
}
