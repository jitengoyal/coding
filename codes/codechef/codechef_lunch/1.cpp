#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int  i,j,n,m,t,ans,hold1,hold2;
	long long int arr[15];
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&arr[j]);
		}
		ans=arr[0];
		for(j=1;j<n;j++)
		{
			hold1=min(ans-arr[j],ans+arr[j]);
			hold2=min(hold1,ans*arr[j]);
			ans=hold2;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
