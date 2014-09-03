#include<stdio.h>
int main()
{
	long long int i,n,k,up,down,res;
	scanf("%lld%lld",&n,&k);
	if(k==1)
		printf("%lld\n",n);
	else if(k>n/2)
		printf("0\n");
	else
	{
		up=1;
		down=1;
		res=1;
		for(i=0;i<k;i++)
		{
			up=((up*(n-i))/(i+1))%1000000003;
		}
		res=(up-n)%1000000003;
		printf("%lld\n",res);
	}
	return 0;
}
