#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int *arr;
	long long  int i,num,n;
	arr=(long long int*)malloc(sizeof(long long int)*1000002);
	arr[0]=0;
	for(i=1;i<=1000000;i++)
		arr[i]=(((i*i*i)%1000000003)+(((arr[i-1]))%1000000003))%1000000003;

	for(i=1;i<=1000000;i++)
		arr[i]=(arr[i]+arr[i-1])%1000000003;
	
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",arr[n]);
	}
	return 0;
}
