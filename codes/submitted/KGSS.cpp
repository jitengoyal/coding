#include<stdio.h>
const int MAX = 100000;
//const int max=i;
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
		T[node].lval=node;
		T[node].rval=node;
		T[node].maxv=arr[a];
		T[node].sum=arr[a];
		return;
	}
	int m=(a+b)/2;
	build_tree(2*node,a,m);
	build_tree(2*node+1,m+1,b);

	T[node].maxv=max2(T[2*node].maxv,T[2*node+1].maxv);
	if(T[2*node+1].lval!=T[2*node+1].rval)
		T[node].sum=max3(T[2*node].maxv+T[2*node+1].maxv,T[2*node].sum,T[2*node+1].sum);
	else if(T[2*node+1].lval==T[2*node+1].rval)
		T[node].sum=max2(T[2*node].maxv+T[2*node+1].maxv,T[2*node].sum);
	T[node].lval=2*node;
	T[node].rval=2*node+1;
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

		res.maxv=max2(left.maxv,right.maxv);
//		printf("%lld %lld\n",left.lval,left.rval);
//		printf("%lld %lld\n",right.lval,right.rval);
		if(left.lval!=left.rval && right.lval!=right.rval)
			res.sum=max3(left.maxv+right.maxv,left.sum,right.sum);
		else if(left.lval!=left.rval && right.lval==right.rval)
			res.sum=max2(left.maxv+right.maxv,left.sum);
		else if(left.lval==left.rval && right.lval!=right.rval)
			res.sum=max2(left.maxv+right.maxv,right.sum);
		else
			res.sum=left.maxv+right.maxv;
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
	Tree res;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	build_tree(1,0,N-1);
	int M,n,x,y;
	char lol,ll;
	scanf("%d%c",&M,&ll);
	
	for(i=0;i<M;i++)
	{
		scanf("%c%c%d%c%d%c",&lol,&ll,&x,&ll,&y,&ll);		
		if(lol=='U')
			update(1,0,N-1,--x,y);
		if(lol=='Q')
		{
			find(res,1,0,N-1,--x,--y);
			printf("%d\n",res.sum);
		}
	}
}
