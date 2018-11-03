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

int main()
{
	bool cond=0;
	unsigned int a;
	
	ifstream in ("gg.txt");
	string d;
	getline(in,d);
	cout<<d[4]<<endl;
	cout<<d<<endl;
	cin>>a;
	unsigned int counter=0;
	vector <char> pal;
	vector <char> as;
	unsigned int i=0;
	while(i<d.size())
	{
		as.push_back(0);
		
		as[counter]=d[i];
		
		counter++;
		if (d[i]==' ')
		{
			unsigned int g=0;
			while (g<i)
			{
				
				if((as[g]==as[i-1-g]))
				{cond=1;}
				g++;
			}
			if(cond==1)
			{
				unsigned int j=0;
				while(j<counter)
				{
					
					pal.push_back(as[j]);
					
					j++;
					
				}
				as.clear();
				counter=0;
			}
		//cout<<cond<<endl;
		}
		
		i++;
		if(cond==1){cond=0;}
	}
	
	pr(pal);
}

