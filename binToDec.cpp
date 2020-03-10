#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int c;
    double sum=0;
   cout<<"enter the binary number:" << endl;
   int n;
   cin>>n;    //n=100
   int l=n;   //l=100
   double digits[n];
   for(c=0;l>=9;c++)
   {                               //c=0              c=1
    digits[c]=l%10;                //digits[0]=0     digits[1]=0
    double h=pow(2.00,c);          //h=1             h=2
    sum=sum+(digits[c]*h);        //sum=0            sum=0
    l=l/10;                       //l=10            l=1
   } 
   sum=sum+l*(pow(2.00,c));        //sum=4
  cout<<n <<" in decimal system is:" <<sum;
  return(0);
}