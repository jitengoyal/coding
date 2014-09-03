#include<stdio.h>
#include<iostream>
using namespace std;

int arr[1000010];
int lis[1000010];
int heights[1000000];

int main()
{
	int i,j,k,l,max,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		heights[i]=1;
		lis[i]=1;
	}

	max=lis[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<j)
		{
			for(j=1;j<arr[i];j++)	
			{
				if(heights[j]+1>heights[arr[i]])
					heights[arr[i]]=heights[j]+1;
			}
		}
		else
		{
			for(j=0;j<i;j++)
			{
				if(arr[i]>arr[j] && lis[i]<lis[j]+1)
				{
					lis[i]=lis[j]+1;
					heights[arr[i]]=lis[j]+1;
				}
			}
		}
		if(max<lis[i])
			max=lis[i];
	}
	printf("%d\n",max);

	return 0;
}
