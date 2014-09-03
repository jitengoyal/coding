#include<stdio.h>
#include<stdlib.h>
#define safe 0
#define yes 1
#define no 0
#define N 8 
int Q[N+1];
int queenstatus(int );
void placequeen(int );
void printsol();
int main()
{
	int i=1;
	placequeen(i);
}
void placequeen(int i)
{
	for(Q[i]=1;Q[i]<=N;Q[i]++)
	{
		if(queenstatus(i)==safe)
		{
			if(i==N)
			{
				printsol();
				exit(1);
			}
			else
			{
				placequeen(i+1);
			}
		}
	}
	return ;
}
int  queenstatus(int i)
{
	int j,attacked=no;
	for(j=1;j<i;j++)
	{
		if((Q[i]==Q[j])||abs(Q[i]-Q[j]==i-j))
		{
			attacked=yes;
			return attacked;
		}
	}
	return attacked;
}
void printsol()
{
	int i;
	for(i=1;i<N;i++)
	{
		printf("Q[%d]=%d ",i,Q[i]);
	}
	printf("\n");
	return;
}
		
