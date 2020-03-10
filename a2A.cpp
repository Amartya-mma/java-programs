#include <iostream>      //65 90   A to Z
using namespace std;     //97 122  a to z
int main()
{
    cout<<"enter an alphabet: " << endl;
    char aaa;
    cin>>aaa;
    int v=aaa;
    if((v>64)&(v<91))
    {
    int nv=v+32;
    char naaa=nv;
    cout<<naaa << endl;
    }
    else
    {
    int nv=v-32;
    char naaa=nv;
    cout<<naaa << endl;
    }
    return(0);
}
