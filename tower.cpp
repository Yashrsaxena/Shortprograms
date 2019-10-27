#include <iostream>
using namespace std;
void tower(int size, char , char , char );			//Tower() Prototype
int main()
{int n;
cout<<"Enter the number of Discs to interchange\n";		
int i;
char arrb[n], arre, arra;
for (i=1;i<=n;i++)						//initialized the arr from 1 to n
arrb[i-1]=i;
for (i=0;i<n;i++)
tower(n, arrb[i], arre, arra);						//Called Tower()
for (int i=0;i<n;i++)						//Displayed End Tower values
cout<<arre[i];
}
void tower(int size, char b, char e, char a)			//Tower() Definition
{
for (int i=0, j=0;i<size-1;i++)					//First Step Beg -> Aux
{if (size==1)
{e=b;
cout<<"Beg -> End";
return;
}
else
{
tower(size-1, b, e, a);
e=b;
tower(size-1, a, b, e);
return;
}
}
