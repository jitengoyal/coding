#include<stdio.h>
#include<algorithm>

using namespace std;
const int MAX = 65536;
//const int max=i;
int arr[65536];

typedef struct Tree{
	int maxv;
	int minv;
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


void build_tree(int node,int a,int b,int n)
{
	if(a==b)
	{
		T[node].maxv=T[node].minv=(n)%arr[a];
		return;
	}

	int m=(a+b)/2;
	build_tree(2*node,a,m,n);
	build_tree(2*node+1,m+1,b,n);
	T[node].maxv=max2(T[2*node].maxv,T[2*node+1].maxv);
	T[node].minv=min(T[2*node].maxv,T[2*node+1].maxv);
}



int main()
{
	int N,i,a,b;
	Tree res;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);

	scanf("%d%d",&a,&b);

	build_tree(1,0,N-1,a);
	
	int counter=0,flag=0;
	while(1)
	{
		printf("a: %d  min: %d\n",T[1].maxv,T[1].minv);
		flag=0;
		if(a==b)
			break;
		if(T[1].maxv>1 && (a-T[1].maxv)>=b)
		{
			flag=1;
			a=(a-T[1].maxv);
			counter++;
			printf("a: %d c: %d max: %d\n",a,counter,T[1].maxv);
		}
		else if(T[1].minv>1 && (a-T[1].minv)>=b && flag!=1)
		{
			a=(a-T[1].minv);
			counter++;
			printf("a: %d c: %d min: %d\n",a,counter,T[1].minv);
		}
		else
		{
			a--;
			counter++;
			printf("a: %d c: %d max: %d\n",a,counter,T[1].maxv);
		}
		build_tree(1,0,N-1,a);
	}

	printf("%d\n",counter);
	return 0;
}
