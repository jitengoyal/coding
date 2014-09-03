#include<stdio.h>
int main()
{
	long long int t,i,n,j,ans;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		ans=0;
		scanf("%lld",&n);
		for(j=1;j*j<=n;j++)
		{
			if(n%j==0)
			{
				if(n/j!=n && n/j!=j)
					ans=ans+j+n/j;
				else
					if(j!=n)
						ans=ans+j;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
