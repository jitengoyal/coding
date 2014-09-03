#include <iostream>
#include<stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

typedef struct node
{
	int lose;
	int done;
}node;

node head[2300000];
int A[410000];

void buildTree(int,int,int);
void query(int,int,int,int,int,int);
int newfunc(int,int,int,int);
void print(int,int,int);

int main()
{
	int i,j,k,l,m,n,t,u,h,x;
	scanf("%d%d",&n,&m);
	buildTree(1,0,n-1);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&l,&h,&x);
		query(1,0,n-1,l-1,h-1,x-1);
	}
	for(i=0;i<n;i++)
	{
		if(i == n-1)
			printf("%d\n",A[i]);
		else
			printf("%d ",A[i]);
	}
	return 0;
}

void print(int ind,int low,int high)
{
	if(low == high)
	{
		printf("%d ",head[ind].lose);
		return;
	}
	int mid = (low+high)/2;
	print(ind*2,low,mid);
	print(2*ind +1,mid+1,high);
}

void buildTree(int ind, int low, int high)
{
	int mid;
	if(low == high)
	{
		head[ind] = (node){0,0};
		return ;
	}
	mid = (low+high)/2;

	buildTree(2*ind, low, mid);
	buildTree(2*ind + 1,mid+1,high);

	head[ind] = (node){0,0};

}

void query(int ind, int low, int high, int p, int q, int x)
{
	if(head[ind].done == 1)
		return;
	else
	{
		int mid;
		mid = (low+high)/2;
		int ans=0;
		if(low == p && high == q)
		{
			ans = newfunc(ind,low,high,x);
			return;
		}
		else if(p > mid)
		{
			query(2*ind + 1,mid+1,high,p,q,x);
			return;
		}
		else if(q <= mid)
		{
			query(2*ind,low,mid,p,q,x);
			return;
		}

		query(2*ind,low,mid,p,mid,x);
		query(2*ind + 1,mid+1,high,mid+1,q,x);
		if(head[2*ind].done == 1 && head[2*ind + 1].done == 1)
			head[ind].done = 1;
	}
}

int newfunc(int ind, int low, int high,int x)
{
	if(head[ind].done == 1)
		return 0;
	if(low == high)
	{
		head[ind].lose = x+1;
		head[ind].done = 1;
		A[low] = x+1;
		if(low == high && low == x)
		{
			head[ind].lose = 0;
			head[ind].done = 0;
			A[low] = 0;
			return -1;
		}
		return 0;
	}
	int mid,ans1=0,ans2=0;
	mid = (low+high)/2;
	ans1 = newfunc(ind*2,low,mid,x);
	ans2 = newfunc(ind*2 + 1,mid+1,high,x);
	if(head[2*ind].done == 1 && head[2*ind + 1].done == 1)
		head[ind].done = 1;
	else
		head[ind].done = 0;
	if(ans1 + ans2 == -1)
		return -1;
	return 0;
}
