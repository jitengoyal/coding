#include<stdio.h>
#include<string.h>
const int MAX = 65536;
//const int max=i;
int arr[65536];

typedef struct Tree{
	int val;
}Tree;

Tree T[131072];

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

void build_tree(int node,int a,int b)
{
	if(a==b)
	{
		T[node].val=0;
		return;
	}
	int m=(a+b)/2;
	build_tree(2*node,a,m);
	build_tree(2*node+1,m+1,b);
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
		res.sum=left.sum+right.sum;
		res.maxv=max3(left.maxv,right.maxv,left.rval+right.lval);
		res.lval=max2(left.lval,right.lval+left.sum);
		res.rval=max2(left.rval+right.sum,right.rval);
	}
}

void update(int node,int a,int b,int k)
{
	if(a==b && a==x)
	{
		T[node].maxv=T[node].sum=T[node].rval=T[node].lval=y;
		return;
	}
	int m=(a+b)/2;
	if(x<=m)
		update(2*node,a,m,x,y);
	else
		update(2*node+1,m+1,b,x,y);
	T[node].sum=T[2*node].sum+T[2*node+1].sum;
	T[node].maxv=max3(T[2*node].maxv,T[2*node+1].maxv,T[2*node].rval+T[2*node+1].lval);
	T[node].lval=max2(T[node*2].lval,T[2*node].sum+T[2*node+1].lval);
	T[node].rval=max2(T[node*2].rval+T[2*node+1].sum,T[2*node+1].rval);
}
int main()
{
	int N,i,m,k,money;
	int M,n,x,y;
	char query[20];
	Tree res;
	scanf("%d",&N);
	scanf("%d",&m);

	build_tree(1,0,N-1);

	scanf("%d",&M);
	for(i=0;i<M;i++)
	{
		scanf("%s",query);
		if(strcmp(query,"UPDATE")==0)
		{
			scanf("%d%d",&k,&money);
			update(1,0,N-1,k,money);
		}
		else if(strcmp(query,"ASK")==0)
		{
			find(res,1,0,N-1,--x,--y);
			printf("%d\n",res.maxv);
		}
	}
}
