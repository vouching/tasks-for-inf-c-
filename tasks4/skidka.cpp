#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	int s;
	double d;
	int f;
	double g;
	bool c=0;
	cin>>a>>s>>f>>d>>g;
	cout<<a<<" "<<s<<" "<<f<<" "<<d<<" "<<g<<endl; 
	if (a>f)
	{
		a=a*(1-g/100);
		c=1;
	}
	if ((a>s)&&(c==0))
	{
		a=a*(1-d/100);
	}
	
	cout<<a;
}
