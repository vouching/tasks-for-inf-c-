
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
class Duration
   {  
	
   public:
   Duration(int a)
   {
	   hour=a/60;
		min=a%60;
   };
    Duration (int hj, int mj)
	{
		int total=hj*60+mj;
		hour=total/60;
		min=total%60;
	};	
    int hour; 
	int min;
	int total()
	{
		int a=hour*60+min;
		return a;
	}
}; 

ostream& operator<<(ostream& stream, const Duration& dur)
{ 
stream<< setfill('0'); 
stream<< setw(2) << dur.hour << ":" << setw(2) << dur.min<<" "; 
return stream; 
}
Duration operator>>(istream& a, Duration& dur)
{
		int as,b;
		a>>as;
		a.ignore();
		a>>b;
		Duration d(as,b);
		dur.hour=d.hour;
		dur.min=d.min;
		return dur; 
}
bool operator < ( Duration& l,  Duration& r)
{
	if(l.total()<r.total()) return true;
	else return false;
}
bool operator > ( Duration& l,  Duration& r)
{
	if(l.total()>r.total()) return 1;
	else return 0;
}
Duration operator-(Duration& dur1,  Duration& dur2)
{
	
	if(dur1>dur2)
	{
	int a=dur1.total()-dur2.total();
	Duration dur3(a);
	
	return dur3;
    }
    else
	{
		Duration dur3(0,0);
		return dur3;
	}
    
} 
Duration operator +(Duration& l, Duration& r)
{
		int a=l.total()+r.total();
		Duration dur(a);
		return dur;
}
void pr(const vector <Duration>& as)
{
	unsigned int i=0;
	while(i<as.size())
	{
		cout<<as[i];
		i++;
	}
}
bool comp(Duration dur1, Duration dur2)
{
	int a=dur1.total();

	int b=dur2.total();
	if(a<b) return true;
	else return false;
	
}
int main()
{
	Duration dur1(0,0);
	Duration dur2(0,0);
	Duration dur3(0,0);
	cin>>dur1;
	cin>>dur2;
	cout<<dur1-dur2<<endl;
	dur3=dur1+dur2;
    cout<<dur1<<" "<<dur2<<" "<<dur3<<endl;
    vector <Duration> as;
    as.push_back(dur1);
    as.push_back(dur2);
    as.push_back(dur3);
    sort(as.begin(),as.end(),[](const Duration& lhs, const Duration& rhs)->bool 
	{ 
		if (lhs.hour == rhs.hour)
		{ 
		return lhs.min < rhs.min; 
		} 
		return lhs.hour < rhs.hour; 
	}
	);
    pr(as);
    return 0;
}
