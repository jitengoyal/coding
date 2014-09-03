#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<string.h>
#include<math.h>
#include<map>
#include<queue>

using  namespace std;

int primes[100000];

void func()
{
	long long int i=3,count=0,flag,j;
	primes[count]=2;
	while(i*i<=100000000)
	{
		flag=0,j=2;
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
			primes[++count]=i;
		i++;
	}
	printf("%lld\n",count);
	return;
}

int main()
{
	int a,b,c,n,num;
	func();
	return 0;
}
