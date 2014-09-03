#include<stdio.h>
int main()
{
	long long int num,i,n,power,res,rem,no_3,no_2,number;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		res=1;
		number=3;
		scanf("%lld",&n);
		power=(n/3);
		rem=(n%3);
		if(rem==0)
		{
			no_3=power;
			no_2=0;
		}
		else if(rem==1)
		{
			no_3=power-1;
			no_2=2;
			if(n>=4)
				res*=4;
		}	
		else
		{
			no_3=power;
			no_2=1;
			res=res*2;

		}

		while(no_3>=1)
		{
			if(no_3%2!=0)
			{
				no_3=no_3-1;
				res=((res)%(1000000007)*(number)%(1000000007))%1000000007;
			}
			else
			{
				no_3/=2;
				number=(number*number)%1000000007;
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}
