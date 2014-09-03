#include<stdio.h>
#include<stdlib.h>
int n,m,i,j,x,y;
int **arr;
int func()
{
	int i,j;
	if(x==n && y==m)
		return;
	for(i=x;i<=n;i++)
	{
		for(j=y;j<=m;j++)
		{
			if(i==x && j>y)
				arr[i][j]=arr[i][j-1]-arr[i][j];
			if(i!=x && j==y)
				arr[i][j]=arr[i-1][j]-arr[i][j];
			if(i!=x && j!=y)
			{
				if(arr[i-1][j]<=arr[i][j-1])
					arr[i][j]=arr[i][j-1]-arr[i][j];
				else
					arr[i][j]=arr[i-1][j]-arr[i][j];
			}
		}
	}
}

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	scanf("%d%d",&n,&m);
	scanf("%d%d",&x,&y);
	arr=(int**)malloc(sizeof(int)*(n+1));
	for(i=0;i<n+1;i++)
	{
		arr[i]=(int*)malloc(sizeof(int)*(m+1));
	}
	int res;
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<m+1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	func();
	/*	for(i=1;i<=n;i++)
		{
		for(j=1;j<=m;j++)
		{
		printf("%d ",arr[i][j]);
		}
		printf("\n");
		}*/
	if(arr[n][m]>=0)
		printf("Y %d\n",arr[n][m]);
	else
		printf("N\n");
	return 0;
}


