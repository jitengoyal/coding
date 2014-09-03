#include<stdio.h>
#include<iostream>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(a%b==0)
		return b;
	gcd(b,a%b);
}

int main()
{
	long long int n,i,num,result=0,a,b,start,up,down;
	start=1;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		start=2;
		result=0;
		scanf("%lld",&num);
		b=num;a=(num/2)+1;
		while(b>0)
		{
			if(a!=b)
			{
				result=result+((b-a+1)*(start-1));
				b=a-1;
				start=start++;
				a=(num/(start))+1;
			}
			else
			{
				result=result+num/b;
				b--;
				a--;
				start++;
			}
		}
		up=result/gcd(num*num,result);
		down=num*num/gcd(num*num,result);
		printf("%lld/%lld\n",up,down);
	}
	return 0;
}
