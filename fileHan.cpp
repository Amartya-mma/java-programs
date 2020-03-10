#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 fstream obj1,obj2,obj3;
 obj1.open("ivycrap.txt");
 obj2.open("ivycrap1.txt");
 obj3.open("1.txt");
 int a=0,b=0,c=0,d=0,e=0;
 obj1>>a>>b>>c>>d>>e;
 obj3<<a<<b<<c<<d<<e;
 obj1.close();
 obj2.close();
 obj3.close();
}
