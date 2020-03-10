#include <iostream>
using namespace std;
int main()
{
 int n,c,z=0;
 cout<<"enter a number" << endl;
 cin>>n;            //n=4
 int l=n;            //l=4
 int binary[n];
 cout<<"no in decimal system:";
 cout<<n << endl;
 cout<<"no in binary system:";
 for(int c=0;l>1;c++)  //c=0                c=1
 {
 binary[c]=l%2;     //binary[0]=0       binary[1]=0
 l=l/2;             //l=2               l=1
 z++;               //z=1               z=2
 }
  cout<<"1";                  //1
 for(int cu=z-1;cu>=0;cu--)      //cu=1   0
 {                
    cout<<binary[cu];         //0          0 
 }
 return(0);
}

