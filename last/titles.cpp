#include <iostream>
#include <vector>
#include <map>
#include<set>
#include<algorithm> 
#include<string>

using namespace std;
class Titles
{
  public:
  string  brand;
  int price;
  int size_w;
  int size_h;
  void getData()
  {
    cout<<"Price is "<<price<<", Brand is "<<brand<<", Width is "<<size_w<<", Heigth is "<<size_h;
  }
  Titles(string a, int b, int c, int d){
    brand =a;
    price =b;
    size_w=c;
    size_h=d;

  }
};

int main()
{
string a;
int c,d,b;
cin>>a>>b>>c>>d;
Titles A(a,b,c,d);
A.getData();
}