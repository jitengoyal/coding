#include<stdio.h>
#include<stdlib.h>

int *arr;
long long int func(long long int n);

int main()
{
	int i;
	arr=(int*)malloc(sizeof(int)*10000000);
	arr[0]=0,arr[1]=1;
	for(i=2;i<=10000000;i++)
	{   
		if(arr[i/2]+arr[i/3]+arr[i/4]>i)
		{   
			arr[i]=arr[i/2]+arr[i/3]+arr[i/4];
		}   
		else
			arr[i]=i;
	}   


	long long int ans,n;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n<=10000000)
			printf("%d\n",arr[n]);
		else
		{
			ans=func(n);
			printf("%lld\n",ans);
		}
	}
	return 0;
}

long long int func(long long int n)
{
	if( n<=10000000)
		return arr[n];
		
	return func(n/2)+func(n/3)+func(n/4);
}
