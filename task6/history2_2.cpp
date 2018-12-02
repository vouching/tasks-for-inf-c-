#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;
struct name
{
    string name;
    string surname;
    int year;
};
class person
{
    public:
    int yeaar;
    vector <name> neww;
     person(string a,string b,int y)
    {
        name g;
        g.name=a;
        g.surname=b;
        g.year=y;
        yeaar=y;
        neww.push_back(g);
    }
    void change_first_name(string a,int year)
    {
        if(year>yeaar)
        {
        name f;
        f.name=a;
        f.surname="unknown last name";
        f.year=year;
        neww.push_back(f);
        }
    else {}
    }
    
    void change_last_name(string a,int year)
    {
        if(year>yeaar)
        {
        name f;
        f.name="unknown name";
        f.surname=a;
        if(f.surname==neww[neww.size()-1].surname)
        {
            f.surname=" unknown last name ";
        }
        f.year=year;
        neww.push_back(f);
        }
        else {}
    }
    void change_both(string a,string b,int year)
    {
        if(year>yeaar)
        {
        name f;
        f.name=a;
        f.surname=b;
        f.year=year;
        neww.push_back(f);
        }
        else {}
    }
    void get_full_name(int year)
    {
        for (unsigned int i=0;i<neww.size();i++)
        {
            if((neww[i].year<=year)&&(year<neww[i++].year))
            { 
                if((neww[i].name!=neww[i-1].name)&&(neww[i].surname!=neww[i-1].surname))
                {cout<<neww[i].name<<" "<<neww[i].surname<<endl;}
                if((neww[i].name==neww[i-1].name)&&(neww[i].surname!=neww[i-1].surname))
                {cout<<"unknown name with "<<neww[i].surname<<endl;}
                if((neww[i].name!=neww[i-1].name)&&(neww[i].surname==neww[i-1].surname))
                {cout<<neww[i].name<<" with unknown last name"<<endl;}
                if((neww[i].name==neww[i-1].name)&&(neww[i].surname==neww[i-1].surname))
                {cout<<"incognito";}
            }
        }
    }
    void get_full_name_with_history(int year)
    {
        get_full_name(year);
        for(unsigned int y=neww.size();y>=0;y--)
        {
            if(neww[y].year<=year)
            {
                cout<<neww[y].name<<" "<<neww[y].surname<<" "<<neww[y].year<<endl;
            }
        }
    }
};
int main()
{
person me ("vova","nedachin",2002);
string d;
int year;
cin>>d;
while((d=="change_last_name")||(d=="change_first_name")||(d=="change_both")||(d=="get_full_name"))
{
    if(d=="change_first_name")
    {
        string a;
        cin>>a>>year;
        me.change_first_name(a,year);
    }
    if(d=="change_last_name")
    {
        string a;
        cin>>a>>year;
        me.change_last_name(a,year);
    }
    if(d=="change_both")
    {
        string a,b;
        cin>>a>>b>>year;
        me.change_both(a,b,year);
    }
    if(d=="get_full_name")
    {
        cin>>year;
        me.get_full_name(year);
    }
    if((d!="change_last_name")&&(d!="change_first_name")&&(d!="change_both")&&(d!="get_full_name"))
    {
        break;
    }
}
}