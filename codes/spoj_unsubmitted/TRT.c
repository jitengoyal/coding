#include<stdio.h>
#include<string.h>

long long int func(int *arr,long long int j,long long int k,long long int cost);
long  long int min(long long int a,long long int b);


int main()
{
	long long int i,num,ans;
	scanf("%lld",&num);
	int arr[num];
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);

	ans=func(arr,0,num-1,1);
	printf("%lld\n",ans);
	return 0;
}

long long int func(int *arr,long long  int j,long long int k,long long int cost)
{
	if(j==k)
		return cost*arr[j]; 

	return min( (cost*arr[j])+func(arr,j+1,k,cost+1), (cost*arr[k])+func(arr,j,k-1,cost+1));
}

long long int min(long long  int a,long long int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
