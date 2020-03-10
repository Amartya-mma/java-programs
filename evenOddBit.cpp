#include <iostream>
using namespace std;
int main()
{
 cout<<"enter a number:"<< endl;
 int n; cin>>n;               
 int z=n&1==1;
 if(z==1)
 cout<<"no is odd"<< endl;
 else
 cout<<"no is even"<< endl;
 return 0;
}
