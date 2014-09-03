#include<stdio.h>
#include<stdlib.h>
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
void merge(node *h,node *h1)
{
	node *h2;
	h2=(node*)malloc(sizeof(node));
	node *h3=h2;
	while((h->next!=NULL) && (h1->next!=NULL))
	{
		if(h->next->n<h1->next->n)
		{
			h2->next=h->next;
			h=h->next;
			h2=h2->next;
		}
		else
		{
			h2->next=h1->next;
			h1=h1->next;
			h2=h2->next;
		}
	}
	if(h->next==NULL)
	{
		while(h1)
		{
			h2->next=h1->next;
			h1=h1->next;
			h2=h2->next;
		}
	}
	else
	{
		while(h)
		{
			h2->next=h->next;
			h=h->next;
			h2=h2->next;
		}
	}
	print(h3);
	return ;
}
void insert(node *h,int m)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	while(h->next!=NULL)
	{
		h=h->next;
	}
	temp->n=m;
	h->next=temp;
	temp->next=NULL;
	return ;
}
int main()
{
	int i,j,k;
	node *h,*h1;
	h=(node*)malloc(sizeof(node));
	h->next=NULL;
	for(i=0;i<4;i++)
	{
		scanf("%d",&k);
		insert(h,k);
	}
	print(h);
	printf("\n");
	h1=(node*)malloc(sizeof(node));
//	h1->next=NULL;
	for(i=0;i<5;i++)
	{
		scanf("%d",&j);
		insert(h1,j);
	}
	print(h1);
	printf("\n");
	merge(h,h1);
	printf("\n");
	return 0;
}
	

