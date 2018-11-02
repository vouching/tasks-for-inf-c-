#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	int b;
	cin>>a>>b;
	int i=a;
	while(i<=b)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
		}
		i++;
	}
}
