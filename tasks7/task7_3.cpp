#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;
struct student
{
    string name;
    string surname;
    int day_birth;
    int month_birth;
    int year_birth;

};
student pushh()
{
    student f;
    cin>>f.name>>f.surname>>f.day_birth>>f.month_birth>>f.year_birth;
    return f;
}
int main()
{
    map <int,student> as;
    int i;
    cin>>i;
    for(int y=1;y<=i;y++)
    {
        student f;
        f=pushh();
        as[y]=f;
    }
    cin>>i;
    for(int y=1;y<=i;y++)
    {
        string h;
        int u;
        cin>>h>>u;
        if(h=="name")
        {
            cout<<as[u].name<<" "<<as[u].surname<<endl;
        }
        if(h=="date")
        {
            cout<<setfill('0')<<setw(2)<<as[u].day_birth<<"."<<setw(2)<<as[u].month_birth<<"."<<as[u].year_birth<<endl;
        }
        if((h!="name")&&(h!="date"))
        {
            cout<<"bad request"<<endl;
        }
    }
}
