
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
void rev(vector <int>& a)
{
	//cout<<" gg"; 
	int id=0;
	int i=a.size();
    for (i=a.size();i>=0;i--)
    {
	//	cout<<i;
		
        a.push_back(a[i]);
       
		id++;
    }
}
void pr(const vector <int> as)
{
	unsigned int i=0;
    while(i<=as.size()-1)
    {
        cout<<as[i]<<" ";
        i++;
    }
    cout<<endl;
    
}
int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    int d=a.size();
    //cout<<a.size();
    pr(a);
    rev(a);
   // unsigned int i=0 ;
     while(d>=0){a.erase(a.begin()+d);d--;}
    pr(a);
    
}

