#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int main()
{
	int i,j,k,l,m,n,count,A[300],t,u,ans,total;
	int a,b,c,d,f,e,g,limit;
	scanf("%d",&t);
	for(u=0;u<t;u++)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		limit = 2*f + 1;
		total = 1;
		for(i=0;i<limit;i++)
			A[i] = 100;
		A[a] = 1;
		A[b] = 1;
		A[c] = 1;
		A[d] = 1;
		A[e] = 1;
		A[f] = 1;
		for(i=2;i<=limit;i++)
		{
			if(A[i] == 100)
			{
				for(j=1;j<i;j++)
				{
					A[i] = min(A[i],A[j]+A[i-j]);
				}
			}
		}
		total = 1;
		ans = 1;
		for(i=2;i<=limit;i++)
		{
			for(j=1;j<limit-i;j++)
			{
				A[i] = min(A[i],A[j]+A[i+j]);
			}
			if(i <= 100)
			{
			//	printf("i = %d and A[i] = %d\n",i,A[i]);
				total += A[i];
				ans = max(ans,A[i]);
			}

		}
		printf("%.3lf %d\n",(total*1.0)/100,ans);
	}

	return 0;
}
