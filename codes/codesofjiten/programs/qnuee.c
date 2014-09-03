#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
#define safe 0
#define n 8
int  q[n+1];
int queenstatus(int i);
void placequeen(int i);	
void printsol();
int main()
{
	int i=1;
	placequeen(i);
}
void placequeen(int i)
{
	int j;
	for(q[i]=1;q[i]<=n;q[i]++)
	{
		if(queenstatus(i)==safe)
		{
			if(i==n)
			{
				printsol();
				exit(1);
			}
			else
				placequeen(i+1);
		}
	}
	return ;
}
int queenstatus(int i)
{
	int j,attacked=false;
		for(j=1;j<i;j++)
		{
			if((q[i]==q[j])||abs(q[i]-q[j])==i-j)
			{
				attacked=true;
				return attacked;
			}
		}
	return attacked;
}
void printsol()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		printf("q[%d]=%d\n",i,q[i]);
	}
	return ;
}
