#include <iostream>
using namespace std;
class swap
{
    public:
    void callByRef(int &x,int &y)
    {
     int c;                                   
    c=x;                                   
    x=y;
    y=c; 
    }
    void callByConstRef(const int &x,const int &y)
    {
    int c;                                   
    c=x;                                   
    x=y;
    y=c;
    }

  void callByVal(int a,int b)
  {
   int r=a;
   a=b;
   b=r;
}
  void callByPointer(int *x, int *y)   
{                                        
 int c;                                   
 c=*x;                                   
 *x=*y;
 *y=c;
}
};
   int main()
{
    int a,b;
    class swap obj;// syntax to create an object
    cout<<"enter two integers:"<<endl;
    cin>>a>>b;
    cout<<"values of a and b after exchanging the nos by value"<<endl; 
    obj.callByVal(a,b); //main func is not included in the class swap therefore an object of the class is used to call its public members.
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl; 
     obj.callByConstRef(&a,&b);
     cout<<"values of a and b after exchanging the by call by const reference"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    obj.callByPointer(&a,&b);
    cout<<"values of a and b after exchanging the by reference using pointers"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl; 
    obj.callByRef(&a,&b);
     cout<<"values of a and b after exchanging the by call by reference"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return(0);
}