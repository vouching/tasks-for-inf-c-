#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream> 
using namespace std;
int main()
{
    ifstream input("inputt.txt");
    string h;
    int x;
    input>>x;
    int y;
    input>>y;
    cout<<x<<" "<<y<<endl;
    vector <int> as;
    as.push_back(0);
    for(int i=1;i<=y;i++)
    {
        for(int u=1;u<=x;u++)
        {
            int j;
            input>>j;
            input.ignore(1);
           // cout<<j<<" ";
            as.push_back(j);
        }
    }
    cout<<endl;
   // int u=1;
    for(unsigned int i=1;i<=as.size()-1;i++)
    {
        if(i%3==1)
        {
			cout<<as[i];
		}
        else
        {
			cout<<" "<<as[i];
		}
        if(i%3==0){
        cout<<endl;}
    }
    

}
