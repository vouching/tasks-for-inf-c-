#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <map>
#include <sstream>
using namespace std;
class Person 
	{
	public:
    void ChangeFirstName(int year, const string& first_name) 
    {
        if(year>=age)
        {firstnames[year]=first_name;}
        else {}
    // добавить факт изменения имени на first_name в год year
    }
    void ChangeLastName(int year, const string& last_name) 
    {
        if(year>=age)
        {
        surnames[year]=last_name;    
        }
        else 
        {

        }
    // добавить факт изменения фамилии на last_name в год year
    }
   string GetFullName(int year) 
    {
        if(year>=age)
        {
        stringstream ss;
        int flag1 = 0;
        int flag2 = 0;
        for(int i=0;i<=year;i++)
        {
            if(firstnames[i]!="")
            {
                flag1=i;
            }
        }
        for(int i=0;i<=year;i++)
        {
         if(surnames[i]!="")
            {
                flag2=i;
            }   
        }
        //if(flag1==0){flag1=flag2;}
        //if(flag2==0){flag2=flag1;}
        if((firstnames[flag1]!="")&&(surnames[flag2]==""))
        ss<<year<<" : "<<firstnames[flag1]<<" with unknown last name";
        if((firstnames[flag1]!="")&&(surnames[flag2]!=""))
        ss<<year<<" : "<<firstnames[flag1]<<" "<<surnames[flag2];  
        if((firstnames[flag1]=="")&&(surnames[flag2]!=""))
        ss<<year<<" : "<<"unknown first name "<<surnames[flag2];
        if((firstnames[flag1]=="")&&(surnames[flag2]==""))
        ss<<year<<" : "<<"incognito";
         string h=ss.str();
        return h;
        }
        else
        {
            return 0;
        }
    // получить имя и фамилию по состоянию на конец года year
    }
    string GetFullNameWithHistory(int year)
    {
		stringstream ss;
		
        int jj1;
		for(int i=0;i<=year;i++)
        {
            if((firstnames[i]!="")||(surnames[i]!=""))
            {
                jj1=i;
                break;
            }
        }
        string newname;
        int flag1;
        age=jj1;
        int flag2=0;
        int flag3=0;
        for (int y=year;y>=age;y--)
        {
            for(int i=0;i<=y;i++)
            {
                if(firstnames[i]!="")
                {
                flag1=i;
                }
            }
            for(int i=0;i<=y;i++)
            {
                if(surnames[i]!="")
                {
                    if(flag2!=0)
                    {
                        flag3=flag2;
                    }
                    flag2=i;
                }   
            }
        newname=firstnames[flag1];
        if(surnames[flag2]==surnames[flag3])
            {
				if(flag2==jj1){ss<<GetFullName(flag2)<<" ";}
				else
                ss<<newname<<" with unknown last name"<<" ";
            }
        if(surnames[flag2]!=surnames[flag3]){
        ss<<GetFullName(y)<<" ";}
        }
        string h=ss.str();
        
       
        return h;
    }
    private:
    map <int,string> firstnames;
    map <int,string> surnames;
    int age;
    // приватные поля
};

int main()
{
  Person person;  
  person.ChangeLastName(1960, "Sergeeva");
  person.ChangeLastName(1961, "Sergeeva");
  person.ChangeFirstName(1965, "Polina");
  person.ChangeFirstName(1966, "Pauline");
  person.ChangeLastName(1967, "Sergeeva");
  person.ChangeLastName(1968, "Volkova");
  person.ChangeFirstName(1970, "Appolinaria");
  person.ChangeFirstName(1990, "Polina");
  person.ChangeLastName(1990, "Volkova-Sergeeva");
  cout << person.GetFullNameWithHistory(1997) << endl;
 
}
