#include<stdio.h>
int main()
{
	long long int n,a;
	scanf("%lld",&n);
	if(n==0 || n==1)
		printf("TAK\n");
	else
	{
		a=1;
		while(1)
		{
			a=a*2;
			if(a>n)
			{
				printf("NIE\n");
				break;
			}
			if(a==n)
			{
				printf("TAK\n");
				break;
			}
		}
	}
	return 0;
}
