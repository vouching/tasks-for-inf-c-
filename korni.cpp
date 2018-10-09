#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
	double a=0;
double b=0;
double c=0;
double x1=0;;
double x2=0;;
double d;
cin>>a;
cin>>b;
cin>>c;
if (a==0)
    {
        if((b==0)&&(c==0))
            {
            cout<<"-1";}
            if(b!=0)
            {  
                x1=-c/b;
                cout<<"1"<<" - number of situation "; printf("%10.2f",x1);
            }
        if((b==0)&&(c!=0)){cout<<"0";}
    }
if(a!=0)
    {
        d=b*b;
        d=d-(4*a*c);
        if (d<0)
            cout<<"0"<<endl;
        if(d==0){
        x1=(-b/2/a);
        cout<<"3"<<"- number of situation";
        printf("%10.2f",x1);}
        if (d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
           
            if(x1<x2){cout<<"2"<<"- number of situation ";printf("%10.2f",x1);printf("%10.2f",x2);}
            if(x2<x1){cout<<"2"<<"- number of situation ";printf("%10.2f",x2);printf("%10.2f",x1);}
        }
    }
}
