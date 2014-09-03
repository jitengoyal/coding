#include<stdio.h>
int main()
{
	int i,j,n,min,p;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n-1;i++)
	{
		min=arr[i][0];
		p=0;
		for(j=0;j<n;j++)
		{
			if(arr[i][j]<min)
			{
				min=arr[i][j];
				p=j;
			}
		}
		printf("%d ",p);
	}
	min=arr[n-1][0]; p=0;
	for(j=0;j<n;j++)
	{
		if(arr[n-1][j]<min)
		{
			min=arr[n-1][j];
			p=j;
		}
	}
		printf("%d\n",p);
	return 0;
}
