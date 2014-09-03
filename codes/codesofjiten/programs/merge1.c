#include<stdio.h>
struct nod
{
	int a;
	struct nod *next;
}node;
void insert(node *start,int n)
{
	node*temp;
	temp=(node*)malloc(sizeof(node))
	temp->a=n;
	while(start->next!=NULL)
	{
		start=start->next;
	}
	start1->next=temp;
		temp->next=NULL;
}
void merge(*start,*start2)
{

int main()
{
	int m,t;
	node *start1 ,*start2;
	start1=(node*)malloc(sizeof(node));
	start1->next=NULL;
	start2=(node*)malloc(sizeof(node));
	start2->next=NULL;
	for(i=0;i<4;i++)
	{
		scanf("%d",&t);
		insert(start1,t);
	}
	for(i=0;i<4;i++)
	{
		scanf("%d",&m);
		insert(start2,m);
	}
	void merge(start1,start2);
	return 0;
}


