#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	int n;
	struct node *next;
}node;
void print(node *h)
{
	while(h->next!=NULL)
	{
		printf("%d ",h->next->n);
		h=h->next;
	}
	return ;
}
void push(node *h)
{
	int k;
	node *temp;
	temp=(node*)malloc(sizeof(node));
	scanf("%d",&k);
	temp->n=k;
	temp->next=h->next;
	h->next=temp;
	print(h);
	return ;
}
void pop(node *h)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp=h->next;
	if(temp!=NULL)
	{
		h->next=temp->next;
	}
	if(temp==NULL)
	{
		printf("EMPTY\nEMPTY\n");
	}
	else if(h->next==NULL)
	{
		printf("%d\n",temp->n);
		printf("EMPTY\n");
	}
	else
	{
		printf("%d\n",temp->n);
		print(h);
	}
//	temp->next=NULL;
	free(temp);
	return ;
}
int main()
{
	int n;
	node *h;
	h=(node*)malloc(sizeof(node));
	h->next=NULL;
	char a[100];
	while(scanf("%s",a)!=EOF)
	{
		n=strlen(a);
		if(n==4)
		{
			push(h);
		}
		if(n==3)
		{
			pop(h);
		}
	}
}
