#include <iostream>
using namespace std;
class cons
{
    public:
    int t,p;
    cons();
    void display() const;
};
cons::cons():t(0),p(0)
{  
}
void cons::display() const
{
cout<<"t"<<t<<" p"<<p<<endl;
}
int main()
{
    cons obj;
    obj.display();
    const cons obj2;
    obj2.display();
    return 0;
}

