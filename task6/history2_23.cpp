#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <map>
#include <sstream>
using namespace std;
class Person {
public:
    void ChangeFirstName(int year, const string& first_name) 
    {
        firstnames[year]=first_name;
    // добавить факт изменения имени на first_name в год year
    }
    void ChangeLastName(int year, const string& last_name) 
    {
        surnames[year]=last_name;    
    // добавить факт изменения фамилии на last_name в год year
    }
   string GetFullName(int year) 
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
        ss<<firstnames[flag1]<<" with unknown last name";
        if((firstnames[flag1]!="")&&(surnames[flag2]!=""))
        ss<<firstnames[flag1]<<" "<<surnames[flag2];  
        if((firstnames[flag1]=="")&&(surnames[flag2]!=""))
        ss<<"unknown first name "<<surnames[flag2];
        if((firstnames[flag1]=="")&&(surnames[flag2]==""))
        ss<<"incognito";
         string h=ss.str();
        return h;

    // получить имя и фамилию по состоянию на конец года year
    }
//  private:
    map <int,string> firstnames;
    map <int,string> surnames;
    
  // приватные поля
};

int main()
{
    Person person;
  
    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }
    person.ChangeFirstName(1970, "Appolinaria");
    
    for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
    }
    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
    cout<<person.GetFullName(year) << endl;
    }
      
}
