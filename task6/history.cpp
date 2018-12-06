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
    changes()
    {}
    changes(string a, string b,int c)
    {
        data=c;
        schange=b;
        fchange=a;
    }
    void vyvod() const
    {
        cout<<fchange<<" "<<schange<<endl;
    }
    void vyvodd() const
    {
        cout<<fchange<<" "<<schange<<" "<<data<<endl;
    }
};
class Person
{ public:
    string name;
    string surname;
    int age;
    int vozrast;
    vector <changes> smena;
    Person(string a,string b, int c)
    {
        name=a;
        surname=b;
        age=c;
        changes d(a,b,c);
        smena.push_back(d);
    }
    void ChangeFirstName(string a, int g) 
    {
        if(g>age)
        {
        name=a;
        string newsurname="unknown last name";
        changes newc(a,newsurname,g);
        smena.push_back(newc);
        }
        else
        {
            cout<<"no person"<<endl;
        }
    }
      void ChangeLastName(string a, int g)
    {
        if(g>=age)
        {
        surname=a;
        string newname="unknown first name";
        changes newc(newname,a,g);
        smena.push_back(newc);
        }
        else
        {
            cout<<"no person"<<endl;
        }
    }
     void changeBoth(string a,string b ,int g)
    {
        if(g>age)
        {
        name=a;
        surname=b;
        changes newc(a,b,g);
        smena.push_back(newc);
        }
        else
        {
            cout<<"no person"<<endl;
        }
    }
    void GetFullName(int u) const
    {
        changes g;
        changes r;
        if(u>age)
        {
        for(unsigned int  y=0;y<smena.size();y++)
        {
            if(smena[y].data==u)
            {
                g=smena[y];
                r=smena[y-1];
                
            }
        }
       /* auto g=smena[smena.size()-1];
        auto r=smena[smena.size()-2];*/
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
            cout<<g.fchange<<"with unknown last name"<<endl;
        }
         if((g.fchange==r.fchange)&&(g.schange==r.schange))
        {
            cout<<"incognito"<<endl;
        }
        }
        else
        {
            cout<<"no person"<<endl;
        }
    }
    void change_vozrast(int a)
    {
        if(a>age)
        {
        vozrast=a-age;
    }
    }
    void GetFullNameWithHistory(int g) const
    {
        if(g>age)
        {
        int hjk;
        for(unsigned int i=0;i<smena.size();i++)
        {
            if(smena[i].data==g)
            {
                hjk=i;
            }
        }
        cout<<name<<" "<<surname<<" "<<g<<endl;
        for(auto i=hjk;i>0;i--)
        {
            if(smena[i].schange==smena[i-1].schange)
            {
                cout<<smena[i].fchange<<" "<<"with unknown last name"<<endl;
            }
            else
            {
                smena[i].vyvodd();
            }
        }
        smena[0].vyvod();
        }
        else
        {
            cout<<"no person"<<endl;
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

Person d("Valera","Sokolov",1934);
int year=1930;
d.change_vozrast(year);
while(1)
{
	cout<<"esli hotite izmenity inya vvedite 1, inache vvedite 2, esli i to i to,to 3,esli hotite vyiti, to 0,esli nichego ne hotite, to 4"<<endl;
    int cond;
    cin>>cond;
    if(cond==1){
    cin>>h;
    d.ChangeFirstName(h,year);
    }
    if (cond==2){
		 cin>>h;
		d.ChangeLastName(h,year);
		}
    if(cond==3)
    { cin>>h;
		cin>>y;
		d.changeBoth(h,y,year);
	}
	if(cond==4){
        changes hjk(" "," ",year);
        d.smena.push_back(hjk);
    }
	if(cond==0)
    {
        break;
    }
    year++;
    d.GetFullName(year);
    d.change_vozrast(year);
    
}
//cout<<d.smena.size()<<endl;
d.GetFullNameWithHistory(year);
}
//вроде всё сделал
