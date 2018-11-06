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
    int hour; 
	int min;
	void change(int h,int m)
	{
		hour=h;
		min=m;
		if(min>60)
		{
			hour=hour+(min/60);
			min%=60;
		}
		if(hour>24)
		{
			hour%=24;
		}
	}
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
  a>>as>>b;
  dur.change(as,b);
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
	Duration dur3;
	if(dur1>dur2){
	int a=dur1.hour-dur2.hour;
    int b=dur1.min-dur2.min;
    dur3.hour=a;
    dur3.min=b;
    if(dur3.min<0)
    {
		dur3.min=60+dur1.min;
		dur3.hour--;
	}
    }
    else{dur3.hour=0;
		dur3.min=0;}
    return dur3;
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
	Duration dur1;
	Duration dur2;
	Duration dur3;
	cin>>dur1;
	cin>>dur2;
	cout<<dur1<<dur2;
	dur3=dur1-dur2;
    cout<<dur1<<dur2<<dur3;\
    vector <Duration> as;
    as.push_back(dur1);
    as.push_back(dur2);
    as.push_back(dur3);
    cout<<endl;
    pr(as);
    cout<<endl;
    sort(as.begin(),as.end(),[](int a,int b, Duration dur1, Duration dur2)->bool
    {  
		int a=dur1.total();

	int b=dur2.total();
	if(a<b) return true;
	else return false;
	
	});
    pr(as);
    return 0;
}
