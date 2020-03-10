#include <iostream>
using namespace std;
 void pattern1(int line,char cha)
 {
     for(int z=1;z<=line;z++)              //     *
    {                                      //     **
    for(int w=1;w<line;w++)                //     ***
    cout<<" ";                          
    for(int y=0;y<z;y++)             
    cout<<cha;
    cout<<'\n';
    }  
 } 
  void pattern2(int line,char cha)
  {
    for(int z=1;z<=line;z++)
    {
    for(int w=1;w<=line-z;w++)            //  *
    cout<<" ";                           // ***
    for(int y=0;y<z;y++)                //*****
    cout<<cha;
    cout<<'\n';
    } 
  }
   void pattern3(int line,char cha)
  {
    for(int z=1;z<=line;z++)
    {
    for(int w=1;w<=line-z;w++)            //     *  
    cout<<" ";                           //     ***
    for(int y=0;y<(z+z-1);y++)            //   *****
    cout<<cha;
    cout<<'\n';
    } 
  }
   int main()
{
    int patt,line;
    char cha;
    cout<<"enter two integers and a character:"<< endl;
    cin>>patt>>line>>cha;
    patt==1?pattern1(line,cha):(patt==2?pattern2(line,cha):pattern3(line,cha));
    return(0);
} 
