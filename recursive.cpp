#include <iostream>
using namespace std;
#include <cmath>
int bin(int n)
{
    if (n==1)
    return 1;
    else if(n==0)
    return 0;
    else 
    return((n%2)+(10*bin(n/2)));
}
int fibonacii(int n,int sum=1)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return(fibonacii(n-1)+fibonacii(n-2));
}
int fact(int n)
{
    if((n==0)||(n==1))
    return 1;
    else
    return(n*fact(n-1));
}
int main()
{
    int n;cin>>n;
    cout<<"factorial:"<<fact(n)<<endl;
    cout<<"fibonacii:"<<fibonacii(n)<<endl;
    cout<<"in binary:"<<bin(n)<<endl;
}