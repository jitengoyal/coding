#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	int *arr=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int start=0,last=0,sum=0,max=0;
	while(1)
	{
		if(sum+arr[last]<=m)
		{
			sum=sum+arr[last];
			last++;
			if(sum>=max)
				max=sum;

			if(last==n)
				break;
		}
		else if(sum+arr[last]>m)
		{
			sum=sum-arr[start];
			start++;
		}
	}
	printf("%d\n",max);
	return 0;
}
