#include <iostream>
#include <string>
using namespace std;
int main()
{   c:
    int option;
    cout<<"1.login"<<endl;
    cout<<"2.exit"<<endl;
    cout<<"enter choice"<<endl;
    cin>>option;
    if(option==1)
    {
    int id;
    cout<<"login id:"<<endl;
    cin>>id;
    string pswd;
    cout<<"enter password without spaces"<<endl;
    cin>>pswd;
        if((id==123456789)&&(pswd==("amartya")))
        {
            cout<<"1.widraw money:"<<endl;
            cout<<"2.deposit money:"<<endl;
            cout<<"3.check balance:"<<endl;
            cin>>option;
            int amt=10000;
            if(option==1)
            {
                cout<<"enter amount to be withdrawn:"<<endl;
                int wid;cin>>wid;
                amt=amt-wid;
                goto c;
            }
            else if(option==2)
            {
                cout<<"enter amount to be deposited:"<<endl;
                int dep;cin>>dep;
                amt=amt+dep;
                goto c;
            }
            else if(option==3)
                {
                    cout<<"amount:"<<amt<<endl;
                    goto c;
                }
            else
                goto c;
        }
        else
        {
        cout<<"wrong id or password"<<endl;
        goto c;
        }
    }
    else if(option==2)
    exit(0);
    else
    goto c;
}


