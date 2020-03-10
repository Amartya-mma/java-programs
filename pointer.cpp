#include <iostream>
using namespace std;
int main()
{
    int b=100;
    int *a;
    a=&b;
    int **c;
    c=&a;
    cout<<a<<"="<<(&b)<<endl;        //address of variable b stored as a val in pointer a
    cout<<(*a)<<endl;       //value stored at location of pointer a
    cout<<(&a)<<endl;       //  address of pointer a
    cout<<*c<<endl;//   adress of pointter a stored as the value of pointer c
    cout<<&c<<endl;//   address of ppointer c
    cout<<c<<endl;// val stored at the ddress of c
}
/*                  a pointer int *ptr has 3 things 
                1) ptr which stores and shows the address of another variable
                2) *ptr which shows the value at the address stored in ptr
                3) also, ptr has its own address which can be stored in another pointer and is &ptr