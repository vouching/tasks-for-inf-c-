#include <iostream>
#include <vector>
#include <map>
#include<set>
#include<algorithm> 
#include<string>

using namespace std;
class Children
{
    private:
    string Name;
    string Surname;
    int age;
    public:
    Children(string a, string b, int c)
    {
        Name=a;
        Surname=b;
        age=c;
    }
    void Cn(string a)
    {
        Name=a;
    }
    void Cs(string a)
    {
        Surname=a;
    }
    void Ca(int a)
    {
        age=a;
    }
    void getData()
    {
        cout<<"Name is "<<Name<<" Surname is "<<Surname<<" Age is "<<age;
    }
       
};
int main()
{
    Children me("Vova","Nedachin",16);
    me.getData();
}