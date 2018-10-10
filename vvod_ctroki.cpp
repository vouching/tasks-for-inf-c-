#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	vector <char> as(94);
	int i,g,l1,l2,l3,maxq;
	char s;
	i=1;
	l1=0;
	l2=0;
	l3=0;
	g=1;
	while(i<4)
	{
		s=getchar();
		as[g]=s;
		if(s==' ') {i++;}
		g++;
			
	}
	//for (int f=1;f<g;f++){cout<<as[f]<<", ";}
	g=1;
	while(as[g]!=' '){l1++;g++;}
	g++;
	while(as[g]!=' '){l2++;g++;}
	g++;
	while(as[g]!=' '){l3++;g++;}
	maxq=max(l1,l2);
	maxq=max(maxq,l3);
	cout<<maxq; 
}

