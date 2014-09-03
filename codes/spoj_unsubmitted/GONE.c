#include<stdio.h>
int main()
{
	int i,n,sum,j;
	int prime[65]={0};
	prime[2]=1;
	prime[3]=1;
	prime[5]=1;
	prime[7]=1;
	prime[11]=1;
	prime[13]=1;
	prime[17]=1;
	prime[19]=1;
	prime[23]=1;
	prime[29]=1;
	prime[31]=1;
	prime[37]=1;
	prime[41]=1;
	prime[43]=1;
	prime[47]=1;
	prime[53]=1;
	prime[59]=1;
	prime[61]=1;
	for(i=0;i<10000000;i++)
	{
		n=i;
		sum=0;
		while(n!=0)
		{
			sum=n%10;
			n/=10;
		}
//		if(prime[sum]==1)
//			res[i]=1;
	}
	return 0;
}
