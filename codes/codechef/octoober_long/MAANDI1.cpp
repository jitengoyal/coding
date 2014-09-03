#include<stdio.h>
#include<iostream>
using namespace std;

int func(int number)
{
	while(number!=0)
	{
		if((number%10)==3 || (number%10)==5 || (number%10)==6)
			return 1;
		number/=10;
	}
	return 0;
}

int main()
{
	int t,i,j,k,l,n,hold,counter;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		counter=0;
		scanf("%d",&n);
		for(j=1;j*j<=n;j++)
		{
			if(n%j==0)
			{
				hold=func(j);
				if(hold==1)
					counter++;
				if(j*j!=n)
				{
					hold=func(n/j);
					if(hold==1)
						counter++;
				}
			}
		}
		printf("%d\n",counter);
	}
}
