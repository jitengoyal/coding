#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n,i,max,sum,max1,max2,hold,flag;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		max=arr[0];
		sum=arr[0];
		for(i=1;i<n;i++)
		{
			sum+=arr[i];
			if(arr[i]>sum)
				sum=arr[i];
			if(sum>max)
				max=sum;
		}
		printf("%d\n",max);
	}
	return 0;
}
