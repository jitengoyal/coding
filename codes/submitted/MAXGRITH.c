#include<stdio.h>
int main()
{
	long long int i,num,n,res;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		if(n==1)
			printf("1\n");
		else if(n==2)
			printf("2\n");
		else if(n==3)
			printf("2\n");
		else if(n==4)
			printf("3\n");
		else
		{
			res=(((n-2)/3)-1)*2+4;
			if((n-2)%3==2)
				res++;
			printf("%lld\n",res%1000000007);
		}
	}
	return 0;
}
