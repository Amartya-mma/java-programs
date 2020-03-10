#include <iostream>
using namespace std;
int maxint(int n,int arr[])
{
    int max=arr[0];
    int i=0;
    for(int c=1;c<n;c++)
    {
        if(arr[c]>max)
        {
        max=arr[c];
        i=c;
        }
    }
    cout<<"max:"<<max;
    return(i);
}
int main()
{
cout<<"enter no of elements:"<<endl;
int n;
cin>>n;
int arr[n];
for(int c=0;c<n;c++)
cin>>arr[c];
cout<<" at "<<maxint(n,arr);
}