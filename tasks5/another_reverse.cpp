#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
void rev (const vector <int>& as, vector <int>& b)
{
	
	cout<<" gg"; 
	int i=as.size()-1;
    for (i=as.size()-1;i>=0;i--)
    {
	//	cout<<i;
		
        b.push_back(as[i]);
       
	}
    cout<<"G";
    
    
};
void pr(const vector <int>& as)
{
	unsigned int i=0;
    while(i<=as.size()-1)
    {
        cout<<as[i]<<" ";
        i++;
    }
    cout<<"L"<<endl;
    
}
int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    vector <int> b;
    cout<<a.size();
    pr(a);
    
    cout<<"GG"<<endl;
    rev(a,b);
    int d=b.size();
   // unsigned int i=0 ;
     while(d>=0){b.erase(b.begin()+d);d--;}
    pr(b);
    
}


