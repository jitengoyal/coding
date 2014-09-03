#include<stdio.h>
#include<iostream>
#include<algorithm>
#define mod 1000000007

using namespace std;

long long int a[100010];
int main()
{
	long long int n,t,i,j,k,rem,ans,m;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		rem=ans=0;
		scanf("%lld%lld%lld",&n,&m,&k);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
			a[j]=((m-a[j])/k)+1;
			rem+=a[j];
		}
		rem=rem&1;
		for(j=0;j<n;j++)
		{
			if(a[i]&1)
				ans=max(ans,(a[i]+1)/2);
			else
				ans=max(ans,1-rem+((a[i])/2));
		}
		printf("%lld\n",ans%mod);
	}
	return 0;
}
