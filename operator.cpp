
#include <iostream>
using namespace std;
class UsingOp
{
    public:
    int a,b;
    UsingOp():a(0),b(2)
    {}
    UsingOp(int c,int d):a(c),b(d)
    {}
    void operator ++()
    {
        a++;
        b++;
    }
    UsingOp operator --()
    {
        UsingOp temp;
        --(temp.a);
        --(temp.b);    
        return temp;
    }
    UsingOp operator *()
    {
        return UsingOp(a*2+3,b*3);
    }
};
int main()
{
    UsingOp obj;
    cout<<obj.a<<'\t'<<obj.b<<endl;
    ++obj;
    cout<<obj.a<<'\t'<<obj.b<<endl;
    UsingOp obj1,obj2;
    obj1=(--obj);
    cout<<obj1.a<<'\t'<<obj1.b<<endl;
   obj2=*obj1;
   cout<<obj2.a<<'\t'<<obj2.b<<endl;
   }