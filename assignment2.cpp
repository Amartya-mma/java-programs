#include <iostream>
using namespace std;
/*_GLIBCXX_HAVE_BROKEN_VSWPRINTF
#include <string>
int main()
{
    string roll("19104021");
    roll=getline(roll,cin);
    string i=roll.substr(0,2);
    int n=std::stoi(i);
    cout<<"Year of enrollment:20"<<roll.substr(0,2)<<endl;
    cout<<"year of completion:20"<<n+4<<endl;
    cout<<"discipline:";
    string dis=roll.substr(4,6);
    if(dis=="40")
    cout<<"electrical"<<endl;
    else if(dis=="10")
    cout<<"cse"<<endl;
    else if(dis=="20")
    cout<<"ece"<<endl;
    else if(dis=="30")
    cout<<"aerospace"<<endl;
    cout<<"serial no of student is:"<<roll.substr(6,8);
    return(0);
}*/
int main()
{
int n;cin>>n;//19104021
int digit[7];
for(int c=0;n>9;c++)
{
    digit[c]=n%10;
    n=n/10;
}
digit[7]=n;
cout<<"year of enrollment:20"<<digit[7]<<digit[6]<<endl;
cout<<"year of completion:20"<<((digit[6]+digit[7]*10)+4)<<endl;
    int dis=(digit[2]+digit[3]*10);
    if(dis==40)
    cout<<"electrical"<<endl;
    else if(dis==10)
    cout<<"cse"<<endl;
    else if(dis==20)
    cout<<"ece"<<endl;
    else if(dis==30)
    cout<<"aerospace"<<endl;
   cout<<"serial no of student is:"<<digit[1]<<digit[0];
}



