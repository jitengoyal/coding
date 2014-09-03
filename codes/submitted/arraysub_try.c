#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;


void insert(int element,node* head);
void delete(int ele,node* head);
node *head;

int main()
{
	head = (node*)malloc(sizeof(node));
	head->next=NULL;

	int n,i,k;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&k);

	node *temp=(node*)malloc(sizeof(node));
	temp->data=array[0];
	head->next=temp;
	temp->next=NULL;
	
	for(i=1;i<k;i++)
	{
		insert(array[i],head);
	}
	
	int j=0,start=0,end=k;
	while(j<n+1-k)
	{
		if(j==n-k)
			printf("%d",head->next->data);
		else
			printf("%d ",head->next->data);
		delete(array[start],head);
		insert(array[end],head);
		start++;
		end++;
		j++;
	}
	printf("\n");

/*	node *tempo;
	tempo=head;
	while(tempo->next!=NULL)
	{
		printf("%d ",tempo->next->data);
		tempo=tempo->next;
	}
	printf("\n");*/

	return 0;
}


void insert(int element,node* head)
{
	int flag=0;
	//node to be inserted
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->data=element;

	node *iter;
	iter=head;
	while(iter->next!=NULL)
	{
		if(element>=iter->next->data)
		{
			flag=1;
			temp->next=iter->next;
			iter->next=temp;
			break;
		}
		iter=iter->next;
	}
	if(flag==0)
	{
		iter->next=temp;
		temp->next=NULL;
	}
	return;
}

void delete(int ele,node* head)
{
	node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->next->data==ele)
		{
			if(temp->next->next!=NULL)
			{
				temp->next=temp->next->next;
			}
			else
				temp->next=NULL;
			break;
		}
		temp=temp->next;
	}
	return;
}
