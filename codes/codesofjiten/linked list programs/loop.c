#include<stdio.h>
#include<stdlib.h>
struct node
{
	int p;
	struct node *next;
};
typedef struct node node;

void checkloop(node *start,int t);
void insert(node *start,int t);
int main()
{
	node *start;
	start=(node *)malloc(sizeof(node));
	start->next=NULL;
	int i,t;
	for(i=0;i<6;i++)
	{
		scanf("%d",&t);
		insert(start,t);
	}
	node *d;
	d=start->next;
	while(d->next!=NULL)
	{
		d=d->next;
	}
	d->next=start->next;

	checkloop(start,t);
	return 0;
}
void insert(node *start,int t)
{
	while(start->next!=NULL)
	{		
		start=start->next;
	}
	node *new;
	new=(node*)malloc(sizeof(node));
	new->next=start->next;
	start->next=new;
	new->p=t;
	return ;
}
void checkloop(node *start,int t)
{
	node *slow,*fast;
	slow=start->next;int c=0;
	fast=start->next->next;
	while(fast!=NULL && slow!=NULL)
	{
		if(slow==fast)
		{
			printf("%d %d\n",slow->p,c);
			printf("YES\n");
			exit(1);
		}
		slow=slow->next;
		if(fast->next!=NULL)
		{
		fast=fast->next->next;
		}
		else
		{
			fast=fast->next;
		}
		c++;
	}
	printf("NO");
	return;
}





