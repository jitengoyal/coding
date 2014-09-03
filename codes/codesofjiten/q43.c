#include<stdio.h>
int counter=1,i=0;
int func(int n,int max);
int main()
{
	int n,max,result,j,i;
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		scanf("%d%d",&n,&max);
		if(max==1) printf("%d\n",n);
		else
		{
		result=func(n,max);
		counter=1;
		i=0;
		printf("%d\n",result);
		}
	}
	return 0;
}
int func(int n,int max)
{
	if(n<=max)
	{
		if (counter==1)
		{
			counter=1;
		}
		return counter;
	}
	else
	{
		if(n%2==0)
		{
			counter=2*counter;
			n=n/2;
			return func(n,max);
		}
		else
		{
				counter=counter*2;
			n=n/2;
			if(n+1<=max)
			{
				return func(n,max);
			}
			else if(n<=max)
			{
			
				if((n+1)*2<(n*2+1))
				{
					counter=counter+1;
					return func(n,max);
				}
				else
				{
				//	printf("%d\n",counter);
					counter=(counter-1)*2+1;
					return func(n,max);
				}
			}
			else
			{
				if(n%2==0)
				{
					n++;
					return func(n,max);
				}
				else
				{
					return func(n,max);
				}
			}
		
			
		}
	}
}

