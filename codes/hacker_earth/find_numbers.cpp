#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	long long int num,t,i,j,z,m,n,max;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		max=0;
		scanf("%lld%lld%lld",&z,&m,&n);
		for(j=1;j*j<=z;j++)
		{
			if(z%j==0)
			{
				if(j<=m && (z/j)<=n)
					max++;
				if((z/j) <=m && j<=n)
					max++;
				if(j*j==z && j<=m && j<=n)
					max--;
			}
		}
		printf("%lld\n",max);
	}
	return 0;
}
