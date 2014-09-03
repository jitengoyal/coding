#include<stdio.h>
#include<stdlib.h>
typedef struct nod
{
	int a;
	struct nod *next;
}node;
node *reverse(node *h)
{
	node *prev,*curr,*fut;
	prev=NULL;
	curr=h->next;
	fut=h->next->next;
	while(curr!=NULL)
	{
		curr->next=prev;
		prev=curr;
		curr=fut;
		if(fut!=NULL)
		{
		fut=fut->next;
		}
	}
	h->next=prev;
	return h;
}
void insert(node*h,int n)
{
	node* temp;
	temp=(node*)malloc(sizeof(node));
	while(h->next!=NULL)
	{
		h=h->next;
	}
	temp->a=n;
	temp->next=h->next;
	h->next=temp;
	
}
void print(node *h)
{
	while(h->next!=NULL)
	{
		printf("%d\n",h->next->a);
		h=h->next;
	}
	return;
}
int main()
{
	int n;
	node *h,*p;
	h=(node*)malloc(sizeof(node));
	h->next=NULL;
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&n);
		insert(h,n);
	}
	print(h);
	p=reverse(h);
	print(p);
	return 0;
}
