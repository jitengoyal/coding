#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int counter=0;


int gcd(int n,int m)
{
	if(n%m==0)
		return m;
	gcd(n,n%m);
}

int main()
{
	int t,n,m;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		if(n==1 && m==1)
		{
			printf("%d\n",1);
			continue;
		}
		if(n==1 && m>1)
			printf("%d\n",m);
		else if(m==1 && n>1)
			printf("%d\n",n);
		else
		{
			counter=0;
			n=n-1;
			m=m-1;
			while(1)
			{
				int hold=gcd(n,m);
				if(hold==1)
					break;
				hold=(n*m)/hold;
				n/=hold;
				m/=hold;
				counter++;
			}
			printf("%d\n",counter+1);
		}

	}
	return 0;
}
