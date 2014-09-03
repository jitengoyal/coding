#include<stdio.h>
int main()
{
	long long int i,j,n,test,s;
	scanf("%lld",&test);
	for(i=0;i<test;i++)
	{
		scanf("%lld%lld",&n,&s);
		if(n==0 && s!=0)
			printf("0 0\n");
		else if(s==0 && n!=0)
			printf("0 %lld\n",n);
		else if(n==0 && s==0)
			printf("0 0\n");
		else
			printf("%lld %lld\n",n/s,n%s);
	}
	return 0;
}
