#include<stdio.h>
int fact(int y);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fact(n));
	return 0;
}
int fact(int y)
{
	int i,b;
	b=1;
	if(y==0)
		return 1;
	else
	{
	 	for(i=1;i<=y;i++)
		{
			b=b*i;
		}
	return b;
	}
}



