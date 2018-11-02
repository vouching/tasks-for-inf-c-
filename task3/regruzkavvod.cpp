#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
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
}; 

ostream& operator<<(ostream& stream, const Duration& dur)
{ 
stream<< setfill('0'); 
stream<< setw(2) << dur.hour << ":" << setw(2) << dur.min; 
return stream; 
}
Duration operator>>(istream& a, Duration& dur)
{
	int as,b;
  a>>as>>b;
  dur.change(as,b);
  return dur; 
}
Duration operator-( Duration& dur1, const Duration& dur2)
{
    int a=dur1.hour-dur2.hour;
    int b=dur1.min-dur2.min;
    dur1.hour=a;
    dur1.min=b;
    if(dur1.min<0)
    {
		dur1.min=60+dur1.min;
		dur1.hour--;
	}
    return dur1;
} 

int main()
{
	Duration dur1;
	Duration dur2;
	Duration dur3;
	cin>>dur1;
	cin>>dur2;
	dur3=dur2-dur1;
    cout<<dur3;
    
}
