#include<stdio.h>
int arr[131072];

typedef struct Tree{
	int maxv;
	int sum;
	int lval;
	int rval;
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

void build_tree(int node,int a,int b)
{
	if(a==b)
	{
		T[node].lval=arr[a];;
		T[node].rval=arr[a];
		T[node].maxv=1;
//		T[node].sum=;
		return;
	}
	int m=(a+b)/2;
	build_tree(2*node,a,m);
	build_tree(2*node+1,m+1,b);

	if(T[2*node].lval==T[2*node+1].rval)
		T[node].maxv=T[2*node].maxv+T[2*node+1].maxv;
	else if(T[2*node].lval==T[2*node+1].lval)
		T[node].maxv=max2(T[2*node].maxv+1,T[2*node+1].maxv);
	else if(T[2*node].rval==T[2*node+1].rval)
		T[node].maxv=max2(T[2*node+1].maxv+1,T[2*node].maxv);
	else if(T[2*node].rval==T[2*node+1].lval)
		T[node].maxv=max3(T[2*node].maxv,T[2*node+1].maxv,2);
	else
		T[node].maxv=max2(T[2*node].maxv,T[2*node+1].maxv);
	
	T[node].lval=T[2*node].lval;
	T[node].rval=T[2*node+1].rval;
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

		if(left.lval==right.rval)
			res.maxv=left.maxv+right.maxv;
		else if(left.lval==right.lval)
			res.maxv=max2(left.maxv+1,right.maxv);
		else if(left.rval==right.rval)
			res.maxv=max2(right.maxv+1,left.maxv);
		else if(left.rval==right.lval)
			res.maxv=max3(left.maxv,right.maxv,2);
		else
			res.maxv=max2(left.maxv,right.maxv);
		res.lval=left.lval;
		res.rval=right.rval;
	}
}

void update(int node,int a,int b,int x,int y)
{
	if(a==b && a==x)
	{
		T[node].lval=T[node].rval=node;
		T[node].maxv=T[node].sum=y;
		return;
	}
	int m=(a+b)/2;
	if(x<=m)
		update(2*node,a,m,x,y);
	else
		update(2*node+1,m+1,b,x,y);
	T[node].maxv=max2(T[2*node].maxv,T[2*node+1].maxv);
	T[node].lval=2*node;
	T[node].rval=2*node+1;
	if(T[2*node+1].lval!=T[2*node+1].rval)
		T[node].sum=max3(T[2*node].maxv+T[2*node+1].maxv,T[2*node].sum,T[2*node+1].sum);
	else if(T[2*node+1].lval==T[2*node+1].rval)
		T[node].sum=max2(T[2*node].maxv+T[2*node+1].maxv,T[2*node].sum);

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
	build_tree(1,0,N-1);
	for(i=25;i>=1;i--)
		printf("%d %d %d %d\n",i,T[i].lval,T[i].rval,T[i].maxv);
	
	for(i=0;i<=M;i++)
	{
		scanf("%d",&x);		
		if(x==0)
			break;
		scanf("%d",&y);		
		find(res,1,0,N-1,--x,--y);
		printf("%d\n",res.maxv);
	}
	return 0;
}
