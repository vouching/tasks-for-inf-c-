#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int up(int a,int& b)
{
   if(a>b)
   {
       cout<<"b stanovitca "<<a<<endl;
       b=a;
       return b;
   } 
   else
   {
       return b;
   }
}
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    b=up(a,b);
    cout<<a<<"  "<<b;
}
