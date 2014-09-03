#include<stdio.h>
void sort(int a[],int n);
int main()
{
	int i,j,n,arr[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
        sort(arr,n);
	return 0;
}
void sort(int arr[],int n)
{
	int i,j,hold;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				hold=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=hold;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return;
}


