#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,a,b,j,m;
	scanf("%d",&n);
	scanf("%d",&m);

	int **arr,*flag;
	arr=(int**)malloc(sizeof(int*)*(n+1));
	flag=(int*)malloc(sizeof(int)*(n+1));
	for(i=0;i<n+1;i++)
	{
		arr[i]=(int*)malloc(sizeof(int)*(n+1));
		flag[i]=0;
	}


	for(i=0;i<n+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			arr[i][j]=0;
		}
	}

	for(i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		arr[a][b]=1;
		arr[b][a]=1;
	}

	int stack[10010],front=0,rear=0,count=0;

	stack[front]=1;
	flag[stack[front]]=1;
	count++;

	while(front<=rear)
	{
		for(j=1;j<n+1;j++)
		{
			if(arr[stack[front]][j]==1 && flag[j]!=1)
			{
				rear++;
				stack[rear]=j;
				flag[j]=1;
				count++;
			}
		}
		front++;
	}
	if(count==n && m==n-1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
