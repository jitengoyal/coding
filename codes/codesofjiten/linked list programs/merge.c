#include<stdio.h>
#include<stdlib.h>
struct node
{
	int n;
	struct node *next;
};
typedef struct node node;
void insert(node *start,int);
//node *reverse(node *start,int n);
//void delete(node *start,int value);
//void insertsorted(node *start,int value);
node *merge(node *start1,node *start2);
void printlist(node *start,int t);
int main()
{
	node *start1,*start2;
	start1=(node *)malloc(sizeof(node));
	start1->next=NULL;

	start2=(node *)malloc(sizeof(node));
	start2->next=NULL;
	int i,t;
	for(i=0;i<5;i++)
	{
		scanf("%d",&t);
		insert(start1,t);
	}
	for(i=0;i<5;i++)
	{
		scanf("%d",&t);
		insert(start2,t);
	}
	node *k;
	printlist(start1,t);
	printf("\n");
	printlist(start2,t);
	printf("\n");
	k=merge(start1,start2);
	k=k->next->next;
	printlist(k,t);
	printf("\n");
	return 0;
}


void  insert(node *start,int t)
{
	while(start->next!=NULL)
	{
		start=start->next;
	}
	node *temp;
	temp=(node *)malloc(sizeof(node));
	start->next=temp;
	temp->next=NULL;
	temp->n=t;
	return;
}
node * merge(node *start1,node *start2)
{
	node *sort;
	sort=(node *)malloc(sizeof(node));
	sort->next=NULL;
	node *start=sort;
	while(start1!=NULL && start2!=NULL)
	{
	if(start1->n<start2->n)
	{
		sort->next=start1;
		start1=start1->next;
	}
	else
	{
		sort->next=start2;
		start2=start2->next;
	}
	sort=sort->next;
	}
	if(start1!=NULL)
	{
		sort->next=start1;
	//	sort=sort->next;
	}
	else
	{
		sort->next=start2;
	//	sort=sort->next;
	}
	return start;
}
void printlist(node *start,int t)
{
	while(start->next!=NULL)
	{
		start=start->next;
	printf("%d ->",start->n);
	
	}
	return;
}
