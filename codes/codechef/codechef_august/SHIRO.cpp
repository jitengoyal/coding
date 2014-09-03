#include <cstdio>
#include <iostream>
#include <algorithm>

int main()
{
	int i,j,t,u,n,array[110],sum,sum1,start;
	double A[10010],ans,prob[110];

	scanf("%d",&t);

	for(u=0;u<t;u++)
	{
		scanf("%d",&n);

		sum = 0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
			sum = sum + array[i];
		}
		for(i=0;i<n;i++)
			scanf("%lf",&prob[i]);

		for(i=0;i<=sum;i++)
			A[i] = 0.0;
		
		A[0] = (100.0 - prob[0])/100.0;
		A[array[0]] = prob[0]/100.0;

		for(i=1;i<n;i++)
		{
			for(j=sum;j>=0;j--)
			{
				if(A[j] > 0.0)
				{
					A[array[i]+j] += (A[j]*prob[i])/100.0;	
					A[j] = (A[j]*(100.0-(prob[i])))/100.0;
				}
			}
		}
		sum1 = sum/2 + sum%2;

		ans = 0.0;
		for(i=sum1;i<=sum;i++)
			ans = ans + A[i];

		printf("%lf\n",ans);
	}
	return 0;
}
