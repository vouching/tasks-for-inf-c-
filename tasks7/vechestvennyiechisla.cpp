#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;
double roundd(double a)
{
	double b=a-int(a);
    a=a-b;
	int c=b*10000;
	if(c%10<5)
	{c=c/10;}
	else{c=c/10+1;}
	double k=c;
	b=0+k/1000;
	a=a+b;
    return a;
}
int main()
{
    ifstream input ("input.txt");
    double a;
    input>>a;
    a=roundd(a);
    cout<<a<<" ";

	double b;
    input>>b;
    cout<<b<<endl;
    b=roundd(b);
    cout<<b<<" ";
}
