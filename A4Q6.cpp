#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int age[n];
    int sal[n];
    for(int c=0;c<n;c++)
    {
    cin>>age[n];
    cin>>sal[n];
    }
    for(int c=0;c<n-1;c++)
    {
        if(sal[c]<sal[c+1])
        {
        int temp=sal[c];
        sal[c]=sal[c+1];
        sal[c+1]=temp;
        int tem=age[c];
        age[c]=age[c+1];
        age[c+1]=tem;
        }
    }
    for(int c=0;c<n;c++)
    {
        cout<<age[c]<<":"<<sal[c]<<endl;    
    }
}//error