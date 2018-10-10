#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	vector <char> as(93);
	int i,maxq,k1,k2,k3;
	string a;
	char s;
	cin>>a;
	k1=0;
	k2=0;
	k3=0;
	i=0;
	maxq=0;
	while(i<4)
	{
		s=getchar();
		if (s==' ')
		{i++;if(i==4) break;}
		else
		{
			if(i==1){k1++;}
			if(i==2){k2++;}
			if(i==3){k3++;}
		}
	}
	maxq=max(k1,k2);
	maxq=max(maxq,k3);
	cout<<maxq; 
}

