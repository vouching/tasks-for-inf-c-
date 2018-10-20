#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
struct Duration
{ 
int hour; 
int min; 
}; 

ostream& operator<<(ostream& stream, const Duration& dur)
{ 
stream<< setfill('0'); 
stream<< setw(2) << dur.hour << ":" << setw(2) << dur.min; 
return stream; 
}
Duration operator>>(istream& a, Duration& dur)
{
  a>>dur.hour>>dur.min;
  return dur; 
}
Duration operator-( Duration& dur1, const Duration& dur2)
{
    int a=dur1.hour-dur2.hour;
    int b=dur1.min-dur2.min;

    dur1.hour=a;
    dur1.min=b;
    return dur1;
} 

int main()
{
	Duration dur3;
  cin>>dur3;
   cout<<dur3;
}
