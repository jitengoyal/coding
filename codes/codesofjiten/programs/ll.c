//program to insert delete n print in a linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct nod
{
	int b;
	struct nod *next;
}node;
void insertend(node *h,int n)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->b=n;
	while(h->next!=NULL)
	{
		h=h->next;
	}
	h->next=temp;
	temp->next=NULL;
}
void insertbeg(node *h, int n)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->b=n;
	temp->next=h->next;
	h->next=temp;
}
void print(node *h)
{
	while(h->next!=NULL)
	{
		printf("%d\n",h->next->b);
		h=h->next;
	}
}
void delete(node *h,int n)
{
	while(h->next->b!=n && h->next->next!=NULL)
	{
		h=h->next;
	}
	if(h->next->b==n)
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
	node *h;
	h=(node*)malloc(sizeof(node));
	h->next=NULL;
	int i;
	for(i=0;i<10;i++)
		insertend(h,i);
	//	insertbeg(h,i);
	delete (h,15);
	print(h);
	return 0;
}
