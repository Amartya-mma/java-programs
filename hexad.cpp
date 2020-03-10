#include <iostream>
#include <cmath>
using namespace std;
int main
{
    int n;
    cout<<"enter a number"<< endl;
    cin>>n;
    int ni=n;               //initial of n that was entered
    int countv1=0,countv2=0;              //count variable
    string l=(string)n;
    int s=l.length();
    int sum[(s/4)+1];
    for(;n>=10;)
    {
    do
    {
     n=n/10;
     countv2++;
     sum[countv1]=sum+n%10;
     while(countv2<4)
    }
    countv1++;
    }
for(int c=0;c<countv1;c++)
    cout<<sum[c];
}
