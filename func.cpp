#include <iostream> // finding at what place is an alphabet in a word if it is not in that word than output is -1
using namespace std;
int main()
{
    string n;
    string a;
    cout<<"enter a word:" << endl;   // << required at the end when no val is to be printed at the end
    cin>>n;
    cout<<"enter an alphabet:" << endl;
    cin>>a;
    string finaln=n;
    int l=n.length();
    string alphabet[l];
    for(int counter=0;counter<l;counter++)
    {
    alphabet[counter]=n.substr(0,1);
    string newword=n.substr(1,l-1-counter);
    n=newword;
    string c=alphabet[counter];
    int v=c;
    if(a==alphabet[counter])
    cout<<a <<" is at " <<(counter+1) <<" position" << endl;
    else if((v>64)&(v<91))
    {
    int nv=v+32;
    c=nv;
    alphabet[counter]=c;
    if(a==alphabet[counter])
    cout<<a <<" is at " <<(counter+1) <<" position" << endl;
    }
    }
    cout<<"the different letters of " <<finaln <<" are:" << endl;
    for(int c=0;c<l;c++)
    cout<<alphabet[c] << endl; //when only 1 variable to be printed << required at the end
    return(0);
}

