#include<stdio.h>
#include<stdlib.h>

long long int func(long long int base,long long int power,long long int modulus)
{
	long long int result=1;
	while(power>0)
	{
		if(power%2==1)
			result=(result*base)%modulus;
		base=(base*base)%modulus;
		power/=2;
	}
	return result%modulus;
}
int main()
{
	long long int num,i,T,j,l,r,m,count,flag;
	long long int prime[100];
	i=2,count=0;

	//calculating prime numbers
	while(i<=100)
	{
		j=2;
		flag=0;
		while(j*j<=i)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
		{
			prime[count++]=i;
		}
		i++;
	}

	scanf("%lld",&num);
	long long int **ans;
	ans=(long long int**)malloc(sizeof(long long int*)*count);
	for(i=0;i<count;i++)
		ans[i]=(long long int*)malloc(sizeof(long long int)*num);

	long long int arr[num],counter,hold;
	for(i=0;i<num;i++)
	{
		scanf("%lld",&arr[i]);
		hold=arr[i];
		for(j=0;j<count;j++)
		{
			counter=0;
			if(hold!=1)
			{
				while(hold%prime[j]==0)
				{
					counter++;
					hold/=prime[j];
				}
			}
			ans[j][i]=counter;
			if(i!=0)
				ans[j][i]+=ans[j][i-1];
		}
	}

	long long int res;
	scanf("%lld",&T);
	for(j=0;j<T;j++)
	{
		res=1;
		scanf("%lld%lld%lld",&l,&r,&m);
		for(i=0;i<count;i++)
		{
			if(l!=1)
				res=(res*func(prime[i],ans[i][r-1]-ans[i][l-2],m))%m;
			else
			{
		//		printf("%d %d\n",prime[i],ans[i][r-1]);
				res=(res*func(prime[i],ans[i][r-1],m))%m;
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}
