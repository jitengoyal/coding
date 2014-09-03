#include<stdio.h>
int rfact(int y);
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("%d\n",rfact(n));
	return 0;
}
int rfact(int y)
{
	return (y==0)?1:y*rfact(y-1);
}
