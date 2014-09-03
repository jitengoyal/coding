#include<stdio.h>
int truck=0;
void func(int, int);
int main()
{
	int n,max,i,j;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		truck=0;
		scanf("%d%d",&n,&max);
		func(n,max);
		printf("%d\n",truck);
	}
	return 0;
}
void func(n,max)
{
	int pile1,pile2;
	if(n%2==0)
	{
		pile1=n/2;
		pile2=n/2;
	}
	else
	{
		pile1=(n-1)/2;
		pile2=(n+1)/2;
	}
	if(pile1>max)
	{
		 func(pile1,max);
	}
	 if(pile2>max)
	{
		 func(pile2,max);
	}
	 if(pile1<=max)
	 {
		truck++;
	 }
	if(pile2<=max)
	{
		truck++;
	}
	return ;
}
