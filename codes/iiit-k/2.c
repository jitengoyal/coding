#include<stdio.h>
long long int func(long long int a,long long int b);
int main()
{
	long long int i,j,k,l,x,y,num,n,hold;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		hold=n;
		n/= 2;
		for(j=n;j>=0;j--)
		{
			int temp=func(hold,j);
			if(temp==1)
			{
				printf("%lld\n",j);
				break;
			}
		}
	}
	return 0;
}

long long int func(long long int a,long long int b)
{
	if(a%b==0)
		return b;
	func(b,a%b);
}
