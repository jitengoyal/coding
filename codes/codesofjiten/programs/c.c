#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void merge(node *main,node *in)
{
	if(in!=NULL)
	{
		int n=in->data;
		node *out;
		out=in->next;
		node *temp;
		while(main->data<n)
		{
			temp=main;
			main=main->next;
		}
		in->next=main;
		temp->next=in;
		merge(temp,out);
	}
	else 
		return ;
}
void merging(node *main,node *in)
{
	node *new;
	node *temp;
	new=(node*)malloc(sizeof(node));
	while(main && in)
	{
		if(main->data < in->data)
		{
			new->next=main;
			main=main->next;
		//	temp=main;
		}
		else
		{
			new->next=in;
			in=in->next;
		//	temp=in;
		}
		new=new->next;
	}
	new->next=temp;
}
			





void insert(node *head,int n)
{
	node *curr;
	curr=(node*)malloc(sizeof(node));
	curr->data=n;
	curr->next=head->next;
	head->next=curr;
}
int main()
{
	node *head,*head1,*start1;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	insert(head,5);
	insert(head,3);
	insert(head,1);
	head=head->next;
	head1=head;
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	printf("\n");
	node *start;
	start=(node*)malloc(sizeof(node));
	start->next=NULL;
	insert(start,4);
	insert(start,2);
	start=start->next;
	start1=start;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
	printf("\n");
//	merge(head1,start1);
	merging(head1,start1);
	while(head1)
	{
		printf("%d ",head1->data);
		head1=head1->next;
	}
	printf("\n");
	return 0;
}
