#include <iostream>
using namespace std;
void prime(int a,int b) // a 2 b 10
{
for(int c=a+1;c<b;c++) //c=3
{
    for(int d=2;d<c;d++)   //d=2
    if(c%d!=0)             //
    cout<<c<<'\t';
}}
int main()
{
int a,b;
cin>>a>>b;
prime(a,b);
return(0);
}
