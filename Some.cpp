#include <iostream>
using namespace std;
#include <string>
class singers
{
private:
string name;
string song;
friend class ufc;
};
class ufc
{
    public:
    string name;
    int rank;
    int wgt;
    void disp(singers temp)
   { 
    temp.name="ed sheeran";temp.song="galway girl";
    cout<<temp.name<<" "<<temp.song<<endl;
   }
    ufc();
    ufc(int,string,int);
    void disp();
};
    ufc::ufc()// class name::constructor/function name .This is use do declare a function or a constructor outside a class.
    {
        name="conor mcgregor";
        rank=2;
        wgt=155;
    }
    ufc::ufc(int r,string n,int w)
    {
        name=n;
        rank=r;
        wgt=w;
    }
    void ufc::disp()
    {
    cout<<rank<<"."<<name<<"("<<wgt<<")"<<endl;
    }
    int main()
    {
    ufc fighter1; 
    fighter1.disp();
    ufc fighter2(1,"khabib nurmagomedov",155);
    fighter2.disp();
    singers ed;
    fighter1.disp(ed);
    return 0;
    }
