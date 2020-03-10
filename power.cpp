#include <iostream>
using namespace std;
/*void power(int n)
{
int pro=1;
do
{
    if((pro*n)<2000)
    pro=pro*n;
}
while(pro<2000);
cout<<pro;
}
int main()
{
int a;
cin>>a;
power(a);
return(0);
}
*/
void power(int n)
{
    int pro=1;
 for(;pro*n<2000;)
 //if(n*n<2000)
 pro=pro*n;
 cout<<pro;
}
int main()
{
int x;cin>>x;
power(x);
}