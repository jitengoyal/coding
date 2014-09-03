#include<stdio.h>
#include<stdlib.h>
typedef struct nod
{
	int a;
	struct nod *next;
}node;
void insertbeg(node *h,int n)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->a=n;
	temp->next=h->next;
	h->next=temp;
}
void insertend(node *h,int n)
{

	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->a=n;
	while(h->next!=NULL)
	{
		h=h->next;
	}
	temp->next=NULL;
	h->next=temp;
}
void print(node *h)
{
	while(h->next!=NULL)
	{
		printf("%d\n",h->next->a);
		h=h->next;
	}
}
void delete(node *h,int n)
{
	while(h->next->a!=n && h->next->next!=NULL)
//	while(h->next->next!=NULL && h->next->a!=n)	
	{
		h=h->next;
	}
	if(h->next->a==n)
	{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp=h->next;
	h->next=temp->next;
	free(temp);
	}
}
int main()
{
	//creating a dummy node useful while deleting
	node *h;
	h=(node*)malloc(sizeof(node));
	h->next=NULL;
	int i;
	for(i=0;i<20;i++)
		insertend(h,i);
	//	insertbeg(h,i);
	delete(h,30);
	print(h);
	return 0;
}
