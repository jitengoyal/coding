#include<stdio.h>
void hanoi(int,int,int,int);
int main()
{
	int n,T1=1,T2=2,T3=3;
	scanf("%d",&n);
	hanoi(n,T1,T2,T3);
	return 0;
}
void hanoi(int n, int T1, int T2, int T3)
{
	static int step=1;
	if (n==1)
	{
		printf("Step %d: Move Disk %d From Tower %d To Tower %d\n",step++,n,T1,T3);
	}
	else
	{
		hanoi(n-1,T1,T3,T2);
		printf("Step %d: Move Disk %d From Tower %d To Tower %d\n",step++,n,T1,T3);
		hanoi(n-1,T2,T1,T3);
	}
}
