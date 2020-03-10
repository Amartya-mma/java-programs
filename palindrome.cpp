#include <iostream>
using namespace std;
#include <string>
void palindrome(string a)
{
bool b;
int i=a.length();
string c[i];
for(int z=0;z<i;z++)
{
 c[z]=a.substr(0,1);
 a=a.substr(1,i-1-z);
}
int w=i-1;
for(int q=0;q<i/2;q++,w--)
{
if(c[q]==c[w])
b=true;
else
b=false;
}
if(b==true)
cout<<"word is palindrome";
else
cout<<"word is not palindrome";
}
int main()
{
cout<<"enter a word:"<<endl;
string word;cin>>word;
palindrome(word);
}
