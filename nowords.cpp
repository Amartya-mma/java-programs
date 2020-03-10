#include <iostream>
#include "conio.h"
using namespace std;
int main()
/*
char c;cin>>c;
int i=static_cast<int>(c);         //syntax for static cast
cout<<i; */
{
char ch;
int nword=1;
int nline=0;
while(ch!='\r')
{
    ch=getche(); //getche() echos(not prints) the characters on the screen but does not stores them anywhere whereas the getch() does not echo them. 
    if(ch==' ')
    nword++;    
}
cout<<"no of words is:"<<nword<<"..........................";
nline++;
}
