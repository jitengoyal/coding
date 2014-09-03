#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b);

int main()
{
	int no,k=0;
	scanf("%d",&no);
	while(k<no)
	{
		int a,b,c,d=0,m=0,n=0,i=0,j=0;
		scanf("%d %d %d",&a,&b,&c);
		int ans=gcd(a,b);

		if(c>a && c>b)
		{
			k++;
			printf("-1\n");
			continue;
		}
		else if( c % ans)
		{
			k++;
			printf("-1\n");
			continue;
		}
		else if(c==0)
		{
			k++;
			printf("0\n");
			continue;

		}

		while(1)
		{
			if(i==0)
			{
				i=a;
				m++;
			}
			else if(j==b)
			{
				j=0;
				m++;
			}
			else
			{
				if(i>(b-j))
				{
					i=(i+j-b);
					j=b;
					m++;
				}
				else
				{
					j=j+i;
					i=0;
					m++;
				}
			}
			if(i==c||j==c)
				break;
		}
		i=0;
		j=0;
		while(1)
		{
			if(i==0)
			{
				i=b;
				n++;
			}
			else if(j==a)
			{
				j=0;
				n++;
			}
			else
			{
				if(i>(a-j))
				{
					i=(i+j-a);
					j=a;
					n++;
				}
				else
				{
					j=j+i;
					i=0;
					n++;
				}
			}
			if(i==c||j==c)
				break;
		}
		if(m>n)
			printf("%d\n",n);
		else
			printf("%d\n",m);
		k++;
	}
	return 0;
}

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else
		gcd(b,a%b);
}
