
#include<stdio.h>
int steps(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",steps(n));
	return 0;
}
int steps(int n)
{
	if(n==0)
		return 0;
	else
		return 2*(steps(n-1))+1;
}



