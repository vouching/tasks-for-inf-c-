#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;
void pr(const vector <char>& as)
{
	unsigned int i=0;
	while(i<as.size())
	{
		cout<<as[i];
		i++;
	}
}

void func(string a)
{
bool cond=0;
unsigned int i=0;
while(i<a.size())
{
if(a[i]==a[a.size()-1-i])
cond=1;
i++;
}
if(cond==1)
cout<<a;
else 
cout<<"ne palindrom";
}
int main()
{
string a;
cin>>a;
cout<<a<<endl;
func(a);
vector <string> as(100);
unsigned int i=0;
while(i<as.size())
{
	cin>>a;
	
	as[i]=a;
	func(a);
	i++;
}

}
