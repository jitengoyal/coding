#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int i,j,k,l,n,m,change,flag=0,c1=0,c2=0,c3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==50)
		{
			if(c1>=1)
				c1--;
			else
			{
				flag=1;
				break;
			}
			c2++;
		}
		else if(m==100)
		{
			if(c1>=1 && c2>=1)
			{
				c1--;
				c2--;
			}
			else if(c1>=3)
				c1=c1-3;
			else
			{
				flag=1;
				break;
			}
			c3++;
		}
		else
			c1++;
	}

	if(flag==1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
