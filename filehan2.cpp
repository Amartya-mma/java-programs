#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream obj("addCrap.txt",ios::in|ios::out|ios::trunc);
    cout<<obj.tellp();  
    obj<<"amartya sharma"<<endl;
    obj.seekg(8,ios::beg);
    char a[8];
    obj.read(a,7);
    a[7]='\0';
    cout<<a<<endl;
    cout<<obj.tellp()<<endl;
    obj.seekg(0,ios::beg);
    obj.write("mixed martial artist",20);
    cout<<obj.tellp(); 
    obj.close();
}