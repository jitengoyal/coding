#include<stdio.h>
#include<iostream>
using namespace std;

long long int func(long long int  i)
{
	i = i - ((i >> 1) & 0x5555555555555555);
	i = (i & 0x3333333333333333) + ((i >> 2) & 0x3333333333333333);
	return (((i + (i >> 4)) & 0xF0F0F0F0F0F0F0F) * 0x101010101010101) >> 56;
}

int main()
{
//	long long int hold=func(1000000000000000000);
	long long int hold=func(28);
	printf("%lld\n",hold);

	long long int l,r,x,counter,max=0,hold;
	scanf("%lld%lld%lld",l,r,x);
	for(i=l;i<=r;i++)
	{
		counter=0;
		while(1)
		{
			hold=func(i);
			counter++;
			if(hold==1)
				break;

		}
	}
	return 0;
}
