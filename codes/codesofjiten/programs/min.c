//program to calculate the minimum element of the array using recursion
#include<stdio.h>
int min(int arr[],int n);
int main()
{
	int i,n,result;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	result=min(arr,n);
	printf("%d\n",result);
	return 0;
}
int min(int arr[],int n)
{
	static int minimum=0;
	static int i=0;
	if(i==n-1)
	{
		return arr[minimum];
	}
	else
	{
		if(arr[minimum]>arr[i+1])
		{
			minimum=i+1;
			i++;
			return  min(arr,n);
		}
		else
		{
			minimum =minimum;
			i++;
			return  min(arr,n);
		}
		
	}
}

	

