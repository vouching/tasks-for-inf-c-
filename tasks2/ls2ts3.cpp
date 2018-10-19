#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a;
    vector <int> as;
    cin>>a;
    int i=0;
    int v=a;
    while(i<a)
    {
        as.push_back(v%2);
        v=v/2;
        if(i>=a)
        {
			break;
		}
        i++;
    }
    for( int g=i;g>0;g--) 
    {
		if(as[g]==1)
		{
			i=g;break;
		} 
	}
	for(int f=0;f<=i;f++)
	{
		cout<<as[i-f];
	}
	
}
