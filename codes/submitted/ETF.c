#include<stdio.h>
int main()
{
	long long int num,i,n,j,ans;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		ans=n;
		for(j=2;j*j<=n;j++)
		{
			if(n%j==0)
				ans=(ans*(j-1))/j;
			while(n%j==0)
				n=n/j;
		}
		if(n>1)
		{
			ans=(ans*(n-1))/n;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
