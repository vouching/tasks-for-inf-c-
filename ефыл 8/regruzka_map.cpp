#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream> 
#include<map>
#include <set>
using namespace std;
template <class u, class t>
ostream& operator << (ostream& ss,const pair<u, t>& lhs)
{
    ss<<"["<<lhs.first<<", "<<lhs.second<<"]";
    return ss;
}
template <typename u, typename t>
ostream& operator << (ostream& ss,const map<u,t>& gg)
{
    ss<<"{"<<endl;
    bool cond =0;
    for(const auto& i:gg)
    {
		if(cond==0)
		{
			ss<<i;
			cond=1;
		}
		else{
        ss<<", "<<i;
		}
	}
    ss<<endl<<"}"<<endl;
    return ss;
}
template <typename k>
ostream& operator << (ostream& ss,const set<k> gg)
{
    ss<<"(";
    bool cond =0;
    for(auto y:gg)
    {
        if(cond==0)
		{
			ss<<y;
			cond=1;
		}
		else
		{
        ss<<", "<<y;
		}
    }
    ss<<")";
    return ss;
}
int main()
{
auto a= make_pair <int,string> (4,"ui");
map <int,string> ll;
ll[6]="gg";
ll[7]="ll";
cout<<ll;
cout<<a<<endl;
set <string> as;
as.insert("asfd");
as.insert("wasd");
as.insert("adfs");
cout<<as;
}
