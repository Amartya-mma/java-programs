#include<iostream>
#include<typeinfo>
using namespace std;
class base
{
protected:
int b;
public:
base():b(0){}
base(int i):b(i){}
virtual void abc();
};
class der1:public base
{
protected:
int d1;
public:
der1():d1(0){b=0;}
der1(int i,int u):d1(i){b=u;}
};
class der2:public base
{
protected:
int d2;
public:
der2():d2(0){b=0;}
der2(int i,int u):d2(i){b=u;}
};
bool is(base* bptr)
{
der1* d1ptr=new der1;
if(d1ptr==dynamic_cast<der1*>(bptr))
return true;
else
return false;
}
int main()
{
base* ptr1=new der1;
base* ptr2=new der2;
if((is(ptr1)==true))
cout<<"ptr1 object is of type der1";
else
cout<<"ptr2 object is of type der2";
if(is(ptr2)==true)
cout<<"ptr1 object is of type der1";
else
cout<<"ptr2 object is of type der2";
}
