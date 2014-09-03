#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<string.h>
#include<math.h>
#include<map>
#include<queue>

using  namespace std;

int primes[100000];

void func()
{
	long long int i=3,count=0,flag,j;
	primes[count]=2;
	while(i*i<=100000000)
	{
		flag=0,j=2;
		while(j*j<=i)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
			primes[++count]=i;
		i++;
	}
	printf("%lld\n",count);
	return;
}


int main()
{
	long long int a,b,c,n,num,x1,x2,y1,y2,ans,i;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
		ans=abs(x2-x1)+abs(y2-y1)-__gcd(abs(x2-x1),abs(y2-y1));
		printf("%lld\n",ans);
	}
	return 0;
}
