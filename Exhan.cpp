#include <iostream>
#include<string>
using namespace std;
class abc
{
    int a,b;
    public:
    abc():a(2),b(2){}
    ~abc()
    {
        a=4;b=4;
    }
    void disp()
    {
        cout<<"object destroyed"<<endl;
    }
};
int main()
{
    try
    {
        string name;
        int c;
        cin>>name;
        cin>>c;
        if(name=="amartya")
        throw 'c';\
        if (c==8)
        throw 'n';
    }
    catch(int a)
    {
        cout<<"name has to be mcgregor, error: 69"<<endl;
    }
    catch(...)
    {
        cout<<"name cannot be amartya"<<endl;
    }
    try
    {
        try
        {
            try
            {
                abc obj;
                obj.disp();
                throw 3;
            }
            catch(int j)
            {
                cout<<"int catch block executed"<<endl;
                throw 2;
            }
            catch(...)
            {
                cout<<"caught partially 3"<<endl;
                throw 2;
            }
            
        }
         catch(...)
         {
             cout<<"caught partially 2"<<endl;
            throw 1;
         }
    }   

        catch(...)
        {
         cout<<"caught completely 1"<<endl;
        }                
}
