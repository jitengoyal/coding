#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,i,num,j;
	long long int *arr;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		arr=(long long int*)malloc(sizeof(long long int)*n);
		for(j=0;j<n;j++)
			scanf("%lld",&arr[j]);

		if(n>=3)
			arr[2]=arr[2]+arr[0];

		for(j=3;j<n;j++)
		{
			if(arr[j-2]>=arr[j-3])
				arr[j]=arr[j]+arr[j-2];
			else
				arr[j]=arr[j]+arr[j-3];
		}


		long long int max=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]>max)
				max=arr[j];
		}
		printf("Case %lld: %lld\n",i+1,max);
	}
	return 0;
}
