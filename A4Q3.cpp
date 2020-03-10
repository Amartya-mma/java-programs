#include <iostream>
using namespace std;
#include <string>
void reverseit(string n)
{
    int l=n.length();
    int c,d;
    for(c=0,d=l-1;c<l/2;c++,d--)
    {
        char temp=n[c];
        n[c]=n[d];
        n[d]=temp;
    }
    cout<<n;
}
int main()
{
    string n;
    cin>>n;
    reverseit(n);
    return 0;
}
