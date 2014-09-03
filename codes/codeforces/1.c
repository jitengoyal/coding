#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,x,y;
	scanf("%d%d",&n,&m);
	int arr[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int min=1000000000;
	for(i=0;i<=m-n;i++)
	{
		if(arr[i+n-1]-arr[i]<min)
			min=arr[i+n-1]-arr[i];
	}
	printf("%d\n",min);
	return 0;
}
