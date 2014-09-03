#include<stdio.h>
const int MAX = 100000;
//const int max=i;
int arr[100000];

typedef struct Tree{
	int value;
	int count;
}Tree;

Tree T[262144];

int max2(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int max3(int a,int b,int c)
{
	int temp=max2(a,b);
	int temp1=max2(temp,c);
	return temp1;
}

void build_tree(int node,int a,int b,int k)
{
	if(a==b)
	{
		T[node].value=arr[a];
		if(arr[a]%k==0)
			T[node].count=1;
		else
			T[node].count=0;
		return;
	}
	int m=(a+b)/2;
	build_tree(2*node,a,m,k);
	build_tree(2*node+1,m+1,b,k);
	T[node].count=T[2*node].count+T[2*node+1].count;
}

void find(Tree &res,int node,int a,int b,int x,int y)
{	
	if(a==x && b==y)
	{
		res=T[node];
		return;
	}
	int m=(a+b)/2;
	if(x>m)
		find(res,2*node+1,m+1,b,x,y);
	else if(y<=m)
		find(res,2*node,a,m,x,y);
	else
	{
		Tree left,right;
		find(left,2*node,a,m,x,m);
		find(right,2*node+1,m+1,b,m+1,y);
		res.count=left.count+right.count;
	}
}

int main()
{
	int N,i;
	int M,n,x,y;
	Tree res;
	scanf("%d%d",&N,&M);
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<M;i++)
	{
		scanf("%d%d%d",&x,&y,&n);
		build_tree(1,0,N-1,n);
		find(res,1,0,N-1,--x,--y);
		printf("%d\n",res.count);
	}
}
