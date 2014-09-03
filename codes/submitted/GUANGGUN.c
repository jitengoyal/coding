#include<stdio.h>
int main()
{
	long long int n,ans,count;
	while(scanf("%lld",&n)!=EOF)
	{
		ans=(n/9)*81+(n%9)*(n%9);
		printf("%lld\n",ans);
	}
	return 0;
}
