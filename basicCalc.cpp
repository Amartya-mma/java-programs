#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"enter two nos" << endl;
    cin>>a;
    cin>>b;
    cout<<"the sign of the operation to be performed" << endl;
    cin>>c;
    switch(c)
    {
    case '+':
    cout<<"sum of nos entered is:" <<a+b << endl;
    break;
    case '-':
    cout<<"difference of nos entered is:" <<a-b << endl;
    break;
    case '*':
    cout<<"product of nos entered is" <<a*b << endl;
    break;
    case '%':
    cout<<" when the two no are divided remainder is:" <<a%b <<endl;
    break;
    case '/':
    cout<<" when the two no are divided quotient is:" <<a/b <<endl;
    break;
    default:
    cout<<"that is not an operator"; //no break required after default coz in the absence of break all the statements *after* that case are executed
    return(0);
    }
}
