#include<stdio.h>
int arr[1000000];

typedef struct Tree{
	int maxv;
	int lval;
	int rval;
	int lfreq;
	int rfreq;
}Tree;

Tree T[1000000];

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
		T[node].lfreq=1;
		T[node].rfreq=1;
		return;
	}
	int m=(a+b)/2;
	build_tree(2*node,a,m);
	build_tree(2*node+1,m+1,b);

	if(T[2*node].lval==T[2*node+1].rval)
		T[node].maxv=T[2*node].maxv+T[2*node+1].maxv;
	else if(T[2*node].lval==T[2*node+1].lval)
		T[node].maxv=max3(T[2*node].maxv+T[2*node+1].lfreq,T[2*node].maxv,T[2*node+1].maxv);
	else if(T[2*node].rval==T[2*node+1].rval)
		T[node].maxv=max3(T[2*node].rfreq+T[2*node+1].maxv,T[2*node].maxv,T[2*node+1].maxv);
	else if(T[2*node].rval==T[2*node+1].lval)
		T[node].maxv=max3(T[2*node].maxv,T[2*node+1].maxv,T[2*node].rfreq+T[2*node+1].lfreq);
	else
		T[node].maxv=max2(T[2*node].maxv,T[2*node+1].maxv);
	
	T[node].lval=T[2*node].lval;
	T[node].rval=T[2*node+1].rval;
	if(T[2*node].lval==T[2*node+1].rval)
	{
		T[node].lfreq=T[node].rfreq=b-a+1;
	}
	else if(T[2*node].lval==T[2*node+1].lval)
	{
		T[node].lfreq=T[2*node].maxv+T[2*node+1].lfreq;
		T[node].rfreq=T[2*node+1].rfreq;
	}
	else if(T[2*node].rval==T[2*node+1].rval)
	{
		T[node].lfreq=T[2*node].lfreq;
		T[node].rfreq=T[2*node].rfreq+T[2*node+1].maxv;
	}
	else
	{
		T[node].lfreq=T[2*node].lfreq;
		T[node].rfreq=T[2*node+1].rfreq;
	}
		
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

		res.lval=left.lval;
		res.rval=right.rval;
		if(left.lval==right.rval)
			res.maxv=left.maxv+right.maxv;
		else if(left.lval==right.lval)
			res.maxv=max3(left.maxv+right.lfreq,left.maxv,right.maxv);
		else if(left.rval==right.rval)
			res.maxv=max3(left.rfreq+right.maxv,left.maxv,right.maxv);
		else if(left.rval==right.lval)
			res.maxv=max3(left.maxv,right.maxv,left.rfreq+right.lfreq);
		else
			res.maxv=max2(left.maxv,right.maxv);
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
	build_tree(1,0,N-1);
	for(i=0;i<M;i++)
	{
		scanf("%d%d",&x,&y);		
		find(res,1,0,N-1,--x,--y);
		printf("%d\n",res.maxv);
	}
	scanf("%d",&x);		
	return 0;
}
