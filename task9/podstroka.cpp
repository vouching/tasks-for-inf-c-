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
bool  Search ( string search, string input)
{
    string a;
    for(auto i:search)
    {
        for(unsigned int y=0;y<input.size();y++)
        {
            if(input[y]==i)
            {
                a=a+i;
                input.erase(0,y);
                break;
            }
        }
    }
    if(a==search)
    return true;
    else
    return false;
}
int main()
{
    string s="cat";
    string d="caet";
    bool a=Search( "cat", "caet");
    cout<<a;

}
