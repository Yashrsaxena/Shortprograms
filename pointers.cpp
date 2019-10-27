//Program No 1
//PROGRAM USING POINTERS

#include <iostream>
using namespace std;

int main()
{
    int *ptr, arr[10];
    int n=10;
    ptr=arr;
    while(n--)
    {
        cout<<"Insert The Element\n";
        cin>>ptr[9-n];
    }
    for (n=0;n<10;n++)
    {
        cout<<"The Element is = "<<ptr[n]<<endl;
    }
    return 0;
}
