#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long  long int N,i,j,X,cost1,cost2,sum=0,min=0,cost,hold1,hold2;
	scanf("%lld",&N);
	long long int arr[N];
	long long int arr1[N];
	for(i=0;i<N;i++)
	{
		scanf("%lld",&arr[i]);
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]<0)
			sum+=arr[i];
	}

	scanf("%lld",&X);
	cost1=-(min*X);
	cost2=-sum;
	if(cost1<cost2)
		cost=cost1;
	else
		cost=cost2;
	sort(arr,arr+N);

	arr1[0]=arr[0];
	for(i=1;i<N;i++)
	{
		if(arr[i]>=0)
			break;
		arr1[i]=arr1[i-1]+arr[i];
	}
	for(i=1;i<N;i++)
	{
		if(arr[i]>=0)
			break;
		hold1=-(arr[i]*X);
		hold2=arr[i]*i-arr1[i-1];
		if(cost>hold1+hold2)
			cost=hold1+hold2;
	}
	printf("%lld\n",cost);
	return 0;
}
