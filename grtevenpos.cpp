#include <iostream>
using namespace std;

struct node
{
int data;
node *next;	
};

node *head=NULL;

void sort(node *ptr, int n);

void insert(int val);

int main()
{
	node *pre, *beg, *ptr, *start;
	int num, n, div, i, t;
	cout<<"Enter the number of elements you wanna enter\n";
	cin>>n;
	t=n;
	while (t--)
	{cin>>num;
	insert(num);
	}
	pre=start=beg=head;
	sort(head, n);
	div=(n+1)/2;
	for (i=0;i<div;i++)
	start=start->next;
	ptr=start;
	for (i;i<n;i++)
	{	
	{
		pre=pre->next;
		beg->next=start;
		ptr=ptr->next;
		start->next=pre;
		beg=pre;
		start=ptr;
	}
	}
	t=n;
	while (t--)
	{
	cout<<head->data<<" ";
	head=head->next;
	}
	
}

void insert(int val)
{
	node *box=new node;
	node *xtra;
	if (head==NULL)
	{
		head=box;
		box->data=val;
		xtra=head;
	}
	else 
	{
	xtra->next=box;
	box->data=val;
	xtra=xtra->next;
	}
	box->next=NULL;
}

void sort(node *ptr, int n)
{for (int j=n-1;j>=0;j--)
{
for (int i=0;i<j;i++)
{
	if (ptr->data>ptr->next->data)
	{ptr->data = ptr->data ^ ptr->next->data;
	ptr->next->data = ptr->data ^ ptr->next->data;
	ptr->data = ptr->data ^ ptr->next->data;
}
ptr=ptr->next;
}
ptr=head;
}
}
