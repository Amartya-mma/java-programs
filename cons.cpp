#include <iostream>
using namespace std;
class abc
{
    int a,b;
  public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void get()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    abc retobj(abc temp);
};
abc abc::retobj(abc temp)
{
    temp.a=2;
    temp.b=9;
    return(temp);
}
int main()
{
    abc obj1;
    obj1.set(3,4);
    obj1.get();
    abc obj3(obj1);
    obj3.get();
    abc obj;
    abc obj4=obj1.retobj(obj);
    obj4.get();
    abc obj5=obj4;
    obj5.get();
}