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

};
class hum
{ public:
    string fname;
    string sname;
    int age;
    int vozrast;
    vector <changes> change;
    hum(string a,string b, int c)
    {
        fname=a;
        sname=b;
        age=c;
        changes d(a,b,c);
        change.push_back(d);
    }
    void new_fname(string a, int g)
    {
        fname=a;
        string newsname=change[change.size()-1].schange;
        changes newc(a,newsname,g);
        change.push_back(newc);
    }
      void new_sname(string a, int g)
    {
        sname=a;
        string newfname=change[change.size()-1].fchange;
        changes newc(newfname,a,g);
        change.push_back(newc);
    }
     void new_fsname(string a,string b ,int g)
    {
        fname=a;
        sname=b;
        changes newc(a,b,g);
        change.push_back(newc);
    }
    void get_full_name()
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
    void change_vozrast(int a)
    {
        vozrast=a-age;
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
int year=1939;
d.change_vozrast(year);
while(1)
{
	cout<<"esli hotite izmenity inya vvedite 1, inache vvedite 2, esli i to i to,to 3"<<endl;
    int cond;
    cin>>cond;
    cin>>h;
    if(cond==1){
    d.new_fname(h,year);
    }
    if (cond==2){
		d.new_sname(h,year);
		}
    if(cond==3)
    {
		cin>>y;
		d.new_fsname(h,y,year);
	}
    year++;
    d.get_full_name();
    d.change_vozrast(year);
}

}
