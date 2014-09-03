#include<stdio.h>
void hanoi(int ,int ,int ,int);
int main()
{
	int n;
	int T1=1,T2=2,T3=3;
	scanf("%d",&n);
	hanoi(n,T1,T2,T3);
	printf("\n");
	return 0;
}
void hanoi(int n,int T1,int T2 ,int T3)
{
	if(n==1)
	{
		printf("move disc %d from tower %d to tower %d\n",n,T1,T3);
		return ;
	}
	else
	{
		hanoi(n-1,T1,T3,T2);
		printf("move disc %d from tower %d to tower %d\n",n,T1,T3);
		hanoi(n-1,T2,T1,T3);
	}
	return ;
}
