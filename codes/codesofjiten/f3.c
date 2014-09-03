#include<stdio.h>
int fact(int);
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("%d\n",fact(n));
	return 0;
}
int fact(int y)
{
	static int a=1;
	a=a*y;
	if(y==1)
		return a;
	else
		return fact(y-1);
}


		


