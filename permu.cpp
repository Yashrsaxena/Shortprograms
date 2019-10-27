#include <iostream>
using namespace std;

void per(int , char []);

int fact(int);

int main()
{int n;
cout<<"Enter number of characters\n";
cin>>n;
char a[n];
cout<<"Enter "<<n<<" different characters\n";
for (int i=0;i<n;i++)
cin>>a[i];
per(n, a);
}

void per(int n, char a[])
{int j=0;
while (j<fact(n))
{for (int i=0;i<n-1;i++)
{a[i]=a[i]+a[i+1];
a[i+1]=a[i]-a[i+1];
a[i]=a[i]-a[i+1];
j++;
for (int k=0;k<n;k++)
cout<<a[k]<<" ";
cout<<endl;
}
}
} 

int fact(int n)
{if (n==1)
return 1;
else 
return n*fact(n-1);
}
