#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements of the string"<<endl;
    cin>>n;
    int arr[n];
    for(int c=0;c<n;c++)
    cin>>arr[n];
    for(int c=0;c<n;c++)
    {
        bool t=true;
        int val=0;
        for(int d=0;d<n;d++)
        if(arr[d]==arr[c])
        val++;
        for(int z=c-1;z>-1;z--)
        if(arr[z]==arr[c])
        t=false;
        if(t==true)
        cout<<arr[c]<<"occurs"<<val<<"times"<<endl;
    }
}//error
