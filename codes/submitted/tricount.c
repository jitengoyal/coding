#include<stdio.h>
int main()
{
	long long int t,i,num;
	long long int ans;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&num);
		ans=(num*(num+2)*(2*num+1))/8;
		printf("%lld\n",ans);
	}
	return 0;
}
