#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int ne(vector <int>& as)
{
	int d,f;
	d=as.size()-2;
	f=as.size()-3;
	int a=as[d];
	int b=as[f];
	int c=b%a;
	return c;
} 
void prv(vector <int> as)
{
	int i=0;
	int g=as.size();
	while(i<g)
	{cout<<as[i]<<" ";i++;}
	cout<<endl;
}
int main()
{
	vector <int> v1;
	vector <int> v2;
	vector <int> v3;
	int a,b,r;
	v1.push_back(0);
	v1.push_back(0);
	cin>>a;
	cin>>b;
	r=a%b;
	v1[0]=a;
	v1[1]=b;
	v1.push_back(0);
	r=ne(v1);
	v1[v1.size()-1]=r;
	v2.push_back(0);
	v2.push_back(0);
	v3.push_back(0);
	while(r!=0)
	{
		v1.push_back(0);
		v2.push_back(0);
		v3.push_back(0);
		r=ne(v1);
		v1[v1.size()-1]=r;
		v2[v2.size()-1]=r;
		v3[v3.size()-1]=r;
	}	
	cout<<v1[v1.size()-2];
}  
