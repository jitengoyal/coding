#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int count=0,j,k,i,n;
	long long int counter;
	int flag;
	while(scanf("%lld",&n)!=EOF)
	{
		flag=0;
		if(n==0)
			break;
		for(i=2;i*i<=n;i++)
		{
			counter=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					n=n/i;
					counter++;
				}
				if(flag==0)
				{
					flag=1;
					printf("%lld^%lld",i,counter);
				}
				else
					printf(" %lld^%lld",i,counter);

			}
		}
		if(n>1)
			printf(" %lld^1\n",n);
		else
			printf("\n");
	}
	return 0;
}
