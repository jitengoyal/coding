#include<stdio.h>
int fib(int y);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
	return 0;
}
int fib(int y)
{
	if(y==0)
		return 0;
	if(y==1)
		return 1;
	else
		return fib(y-1)+fib(y-2);
}	

