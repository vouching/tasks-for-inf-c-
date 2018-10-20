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
Duration operator+( Duration& dur1, const Duration& dur2)
{
    int a=dur1.hour+dur2.hour;
    int b=dur1.min+dur2.min;

    dur1.hour=a;
    dur1.min=b;
    return dur1;
} 

int main()
{
   Duration dur1;
   dur1.min=30;
   dur1.hour=1;
   Duration dur2;
   dur2.min=30;
   dur2.hour=1;
   Duration dur3;
   dur3=dur1+dur2;
   cout<<dur3.hour<<":"<<dur3.min;
}
