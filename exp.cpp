#include <iostream>
using namespace std;
class a
{
    public:
    int a,d,c;    
};
class b:public a
{
        public:
    b(int x,int y,int z)
    {
        a=x;d=y;c=z;
    }
    void disp()
    {
    cout<<a<<d<<c;
    }
};
int main()
{
    b obj(4,2,6);
    obj.disp();
}