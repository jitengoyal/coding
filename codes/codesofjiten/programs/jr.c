//program to print the diguts of a number
#include<stdio.h>
void print(int n);
int main()
{
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
void print(int n)
{
	int j;
	if(n==0)
		return ;
	else
	{
		j=n%10;
		n=n/10;
		print(n);
		printf("%d ",j);
	}
	printf("\n");
}



