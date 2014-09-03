#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,num,n,j,m,value,count,k,flag;
	long long int counter,result;
	int prime[200];
	count=0;
	prime[0]=2;
	j=3;
	while(j*j<=1000000)
	{
		flag=0;
		k=2;
		while(k*k<=j)
		{
			if(j%k==0)
			{
				flag=1;
				break;
			}
			k++;
		}
		if(flag==0)
			prime[++count]=j;
		j++;
	}

	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		counter=1,result=1;
		scanf("%d%d",&n,&m);
		value=func(n,m);
		for(j=0;j<count;j++)
		{
			if(prime[j]*prime[j]>value)
			{
				if(value!=1)
				{
					counter=2;
					result*=counter;
				}
				break;
			}
			if(value%prime[j]==0)
			{
				while(value%prime[j]==0)
				{
					value=value/prime[j];
					counter++;
				}
				result*=counter;
				counter=1;
			}
		}
		printf("%lld\n",result);
	}
	return 0;
}


int func(int a,int b)
{

	if(b==0)
		return a;
	return func(b,a%b);
}
