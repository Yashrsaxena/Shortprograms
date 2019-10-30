#include <iostream>
using namespace std;

int main()
{int a[30], op, i=-1, t, k;
char ch='y';
for (;ch!='n';)
{cout<<"Choose an appropriate option from following\n";
cout<<"Press 1 for Push and 2 for Pop\n";	//Selecting Push or Pop
cin>>op;
if (op==1)				//Push procedure selected
{if (i==29)
cout<<"There is no space to store\n";	//Stack Overflow
else 
{i++;
cout<<"Enter the element\n";            //Pushing the element
cin>>a[i];
for (k=0;k<i;k++)
cout<<a[k]<<" ";
}
}
else if (op==2)
{if (i==-1)
cout<<"No Element to be popped\n";	//Stack Underflow
else 
{t=a[i];
i--;
cout<<"You popped "<<t<<" \n";
for (k=0;k<i;k++)
cout<<a[k]<<" ";
}
}
else
cout<<"You selected wrong choice\n";
cout<<"Do you again want to perform any operation (y/n)?\n";
cin>>ch;
}
}
