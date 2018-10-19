#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b,c;
    b=2;
    c=1;
    while(b<=a)
    {
        c=c*b;
        b++;
          cout<<c<<endl;
    }
    cout<<c;
}
