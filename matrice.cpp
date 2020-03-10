#include <iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"enter the no of rows and columns in matrice 1"<<endl;
    cin>>r1>>c1;
    int r2,c2;
    cout<<"enter the no of rows and columns of marice 2"<<endl;
    cin>>r1>>c1;
    int a[r1][c1];
    int b[r2][c2];
    cout<<"enter elements of 1st matrice"<<endl;
    for(int c=0;c<r1;c++)
    {
    for(int d=0;d<c1;d++)
    cin>>a[c][d];
    }
    cout<<"enter elements of the 2nd matrice"<<endl;
    for(int c=0;c<r1;c++)
    {
    for(int d=0;d<c1;d++)
    cin>>b[c][d];
    }
    cout<<"1.sum"<<endl;
    cout<<"2.diff"<<endl;
    cout<<"3.product"<<endl;
    int option;
    cin>>option;
    switch(option)
    {
    case 1:
    {
        if((r1==r2)&&(c1==c2))
        {
        int s[r1][r2];
        for(int c=0;c<r1;c++)
        for(int d=0;d<c1;d++)
        s[c][d]=a[c][d]+b[c][d];
        for(int c=0;c<r1;c++)
        {
        cout<<""<<endl;
        for(int d=0;d<c1;d++)
        cout<<s[c][d]<<'\t';
        }
        }
        else
        cout<<"wrong option"<<endl;
        break;
    }
    case 2:
    {
        if((r1==r2)&&(c1==c2))
        {
        int dif[r1][r2];
        for(int c=0;c<r1;c++)
        for(int d=0;d<c1;d++)
        dif[c][d]=a[c][d]-b[c][d];
        for(int c=0;c<r1;c++)
        {
        cout<<""<<endl;
        for(int d=0;d<c1;d++)
        cout<<dif[c][d]<<'\t';
        }
        }
        else
        cout<<"wrong option"<<endl;
        break;
    }
    case 3:
    {
        if(c1==r2)
        {
        int p[r1][c2];
        for(int c=0;c<r1;c++)
        for(int d=0;d<c1;d++)
        {
        p[c][d]=0;
        p[c][d]+=(a[c][d])*(b[d][c]);
        }
        for(int c=0;c<r1;c++)
        {
        cout<<""<<endl;
        for(int d=0;d<c1;d++)
        cout<<p[c][d]<<'\t'<<endl;
        }
        }
        else
        cout<<"wrong choice"<<endl;
        break;
    }
    case 4:
    {
    break;
    }
    default:
    {
        cout<<"wrong choice"<<endl;
    }
    }
}
