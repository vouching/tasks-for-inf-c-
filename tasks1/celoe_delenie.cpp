#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(b==0) cout<<"resut is - "<<"impossible"<<endl;
	if(b>a) cout<<"resut is - "<<0;
	if(b==a) cout<<"resut is - "<<1;
	if(a>b) cout<<"resut is - "<<a/b;
}
