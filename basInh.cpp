#include <iostream>
using namespace std;
class base
{
    public:
    int x,y,z;
    void disp()
    {
        cout<<x<<y<<z;
    }
};
class derived:public base
{
    public:
    derived(int u,int v,int w)
    {
        x=u;y=v;z=w;
    }
    void disp()
    {
        cout<<"disp has been overeridden and now the func will call disp of base class";
        base::disp();
    }
};
int main()
{
    derived obj(1,49,2);
    obj.disp();
}