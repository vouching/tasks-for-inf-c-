#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
struct changes
{
    int data;
    string schange;
    string fchange;
    changes(string a, string b,int c)
    {
        data=c;
        schange=b;
        fchange=a;
    }
    void vyvod()
    {
        cout<<fchange<<" "<<schange<<endl;
    }
    void vyvodd()
    {
        cout<<fchange<<" "<<schange<<" "<<data<<endl;
    }
};
class hum
{ public:
    string fname;
    string sname;
    int age_of_empires;
    int vozrast;
    vector <changes> change;
    hum(string a,string b, int c)
    {
        fname=a;
        sname=b;
        age_of_empires=c;
        changes d(a,b,c);
        change.push_back(d);
    }
    void new_fname(string a, int g)
    {
        if(g>age_of_empires)
        {
        fname=a;
        string newsname="nothing";
        changes newc(a,newsname,g);
        change.push_back(newc);
        }
        else
        {
            cout<<"nothing"<<endl;
        }
    }
      void new_sname(string a, int g)
    {
        if(g>=age_of_empires)
        {
        sname=a;
        string newfname="nothing";
        changes newc(newfname,a,g);
        change.push_back(newc);
        }
        else
        {
            cout<<"nothing"<<endl;
        }
    }
     void new_fsname(string a,string b ,int g)
    {
        if(g>age_of_empires)
        {
        fname=a;
        sname=b;
        changes newc(a,b,g);
        change.push_back(newc);
        }
        else
        {
            cout<<"nothing"<<endl;
        }
    }
    void get_full_name(int u)
    {
        if(u>age_of_empires)
        {
        auto g=change[change.size()-1];
        auto r=change[change.size()-2];
        if((g.fchange!=r.fchange)&&(g.schange!=r.schange))
        {
            g.vyvod();
        }
        if((g.fchange==r.fchange)&&(g.schange!=r.schange))
        {
            cout<<"unknown first name"<<" "<<g.schange<<endl;
        }
         if((g.fchange!=r.fchange)&&(g.schange==r.schange))
        {
            cout<<g.fchange<<" "<<"unknown second name"<<endl;
        }
         if((g.fchange==r.fchange)&&(g.schange==r.schange))
        {
            cout<<"incognito"<<endl;
        }
        }
        else
        {
            cout<<"nothing"<<endl;
        }
    }
    void change_vozrast(int a)
    {
        if(a>age_of_empires)
        {
        vozrast=a-age_of_empires;
    }}
    void get_full_history(int g)
    {
        if(g>age_of_empires)
        {
        cout<<fname<<" "<<sname<<" "<<vozrast<<endl;
        for(auto i=change.size()-1;i>0;i--)
        {
            change[i].vyvodd();
        }
        change[0].vyvod();
        }
        else
        {
            cout<<"nothing"<<endl;
        }
    }
};
void pr(vector <string> a)
{
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
string h;
string y;
hum d("Valera","Sokolov",1934);
int year=1930;
d.change_vozrast(year);
while(1)
{
	cout<<"esli hotite izmenity inya vvedite 1, inache vvedite 2, esli i to i to,to 3,esli hotite vyiti, to 0,esli nichego ne hotite, to 4"<<endl;
    int cond;
    cin>>cond;
    if(cond==1){
    cin>>h;
    d.new_fname(h,year);
    }
    if (cond==2){
		 cin>>h;
		d.new_sname(h,year);
		}
    if(cond==3)
    { cin>>h;
		cin>>y;
		d.new_fsname(h,y,year);
	}
	if(cond==4){}
	if(cond==0)
    {
        break;
    }
    year++;
    d.get_full_name(year);
    d.change_vozrast(year);
    
}
cout<<d.change.size()<<endl;
d.get_full_history(year);
}
