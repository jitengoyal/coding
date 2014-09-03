#include<stdio.h>
int main()
{
	int a[1000];
	a[0]=1;
	printf("%d %d %d",a,&a,&a[0]);
	return 0;
}
