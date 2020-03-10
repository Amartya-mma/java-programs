#include <iostream>
#include <iomanip>
using namespace std;
void design()
{
for(int i=1;i<15;i++)
{
    if(i%2==0)
    cout<<'\xB2';
    else
    cout<<'\f';            //f-formfeed
}
cout<<endl<<"AMARTYA";
cout<<'\b';           //b-beep
}
void width()
{
    cout<<setw(25)<<"conor mcgregor"<<endl;
    cout<<setw(25)<<"khabib nurmagomedov"<<endl;
    cout<<setw(25)<<"dustin porier"<<endl;
}
int main()
{
    design();
    cout<<endl;
    width();
}