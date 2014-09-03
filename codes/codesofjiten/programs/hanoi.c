#include<stdio.h>
int num(int);
int main()
{
	int n;
	scanf("%d",&n);
	num(n);
	return 0;
}
int num(int p)
{
	if(p==0)
	{
		return;
	}
	num(p/10);
	printf("%d\n",p%10);
}

