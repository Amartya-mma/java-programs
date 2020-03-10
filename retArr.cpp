#include <iostream>
using namespace std;
int* arrRet(int arr[5])
{
    for(int c=0;c<5;c++)
    arr[c]++;
    return arr;
}
int main()
{
    int ar[5]={1,2,3,4,5};
    int *array;
    array=arrRet(ar);
    cout<<*array<<endl<<*(array+1)<<endl;
}