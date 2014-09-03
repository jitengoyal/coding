#include<stdio.h>
int main()
{
	long long int t,j,i,n,k,res,max;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&n,&k);
		long long int up=1;
		long long int down=1;
		if(n-k>k-1)
			max=k-1;
		else
			max=n-k;

		if(n==k)
			printf("1\n");
		else if(n-1==k)
			printf("%lld\n",k);

		else
		{
			for(j=1;j<=max;j++)
			{
				up=((up)*(n-j));
				up=up/j;
			}
			printf("%lld\n",up);
		}
	}
	return 0;
}
