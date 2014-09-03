#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int x,y,i,j;
	char both_pos[1001][1001],x_neg[1001][1001],y_neg[1001][1001],both_neg[1001][1001];
	int  dir;
	int temp,count,t=1;
	char string[1010];
	while(1)
	{
		count=0,dir=0;
		x=0;y=0;
		both_pos[0][0]=t;

		scanf("%s",string);
		if(string[0]=='Q')
			break;

		while(string[dir]!='Q')
		{
			if(string[dir]=='U')
				y++;
			else if(string[dir]=='D')
				y--;
			else if(string[dir]=='L')
				x--;
		 	else if(string[dir]=='R')
				x++;

			if(x>=0 && y>=0)
			{
				if(both_pos[x][y]==t)
					count++;
				else
					both_pos[x][y]=t;
			}

			else if(x>=0 && y<0)
			{
				if(y_neg[x][-y]==t)
					count++;
				else
					y_neg[x][-y]=t;
			}
			else if(x<0 && y>=0)
			{
				if(x_neg[-x][y]==t)
					count++;
				else
					x_neg[-x][y]=t;
			}
			else if(x<0 && y<0)
			{
				if(both_neg[-x][-y]==t)
					count++;
				else
					both_neg[-x][-y]=t;
			}
			dir++;
		}
		printf("%d\n",count);
		t++;
	}
	return 0;
}
