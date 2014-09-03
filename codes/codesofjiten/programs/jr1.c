//program to convert a given no to anothr base given by the user
#include<stdio.h>
void call(int n,int dig);
int main()
{
	int n,dig;
	scanf("%d",&n);
	scanf("%d",&dig);
	call(n,dig);
	printf("\n");
	return 0;
}
void call(int n,int dig)
{
	int rem;
	if(n<dig)
	{
		printf("%d",n);
		return ;
	}
	else
	{
		rem=n%dig;
		n=n/dig;
		call(n,dig);
		printf("%d",rem);
	}
}



