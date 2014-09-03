#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef struct node{
	int number;
	node *left;
	node *right;
}node;

node *head;
int n,t,i,j;
int arr[2010];
char arr1[2010][32];

void tree(int j,int k)
{
	if(k==32)
		return;
	if(arr1[j][k]==0)
	{
		if(head->left==NULL)
		{
			node *temp=(node*)malloc(sizeof(node);
			head->left=temp;
			temp->left=NULL;
			temp->right=NULL;
			if(k==31)	
				temp->number=j;
			head=head->left;
			tree(j,k+1);
		}
		else
			head=head->left;
	}
	else if(arr[j][k]==1)
	{
		if(head->right==NULL)
		{
			node *temp=(node*)malloc(sizeof(node);
			head->right=temp;
			temp->left=NULL;
			temp->right=NULL;
			if(k==31)	
				temp->number=j;
			head=head->right;
			tree(j,k+1);
		}
		else
			head=head->right;

	}
}

int main()
{
	head=(node*)malloc(sizeof(node));
	head->left=NULL;
	head->right=NULL;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d",&arr[j]);
		for(j=0;j<n;j++)
		{
			for(int k=0;k<32;k++)
			{
				if(arr[j] & 1<<k)
					arr1[j][k]=1;
				else
					arr1[j][k]=0;
			}
		}
		for(j=0;j<n;j++)
		{
			k=0;
			tree(j,k);
		}
	}
	return 0;
}
