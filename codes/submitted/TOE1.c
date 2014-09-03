#include<stdio.h>
int main()
{
	int i,num,n,j,k,x_count,o_count,x_win,o_win,x_temp,o_temp;
	char a,arr[3][3];
	scanf("%d%c",&n,&a);
	for(i=0;i<n;i++)
	{
		x_count=0,o_count=0,x_win=0,o_win=0,x_temp=0,o_temp=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				scanf("%c",&arr[j][k]);
				if(arr[j][k]=='X')
					x_count++;
				if(arr[j][k]=='O')
					o_count++;
			}
			scanf("%c",&a);
		}
		if(i!=n-1)
			scanf("\n");

		for(j=0;j<3;j++)
		{
			x_temp=0,o_temp=0;
			for(k=0;k<3;k++)
			{
				if(arr[j][k]=='X')
					x_temp++;
				else if(arr[j][k]=='O')
					o_temp++;
				else
				{
					x_temp=0;
					o_temp=0;
				}
			}
			if(x_temp==3)
				x_win++;
			else if(o_temp==3)
				o_win++;
		}
	
		for(k=0;k<3;k++)
		{
			x_temp=0,o_temp=0;
			for(j=0;j<3;j++)
			{
				if(arr[j][k]=='X')
					x_temp++;
				else if(arr[j][k]=='O')
					o_temp++;
				else
				{
					x_temp=0;
					o_temp=0;
				}
			}
			if(x_temp==3)
				x_win++;
			else if(o_temp==3)
				o_win++;
		}

		x_temp=0,o_temp=0;
		for(j=0;j<3;j++)
		{
			k=j;
			if(arr[j][k]=='X')
				x_temp++;
			else if(arr[j][k]=='O')
				o_temp++;
			else
			{
				x_temp=0;
				o_temp=0;
				break;
			}
		}
		if(x_temp==3)
			x_win++;
		if(o_temp==3)
			o_win++;
		x_temp=0,o_temp=0;
		k=2;
		for(j=0;j<3;j++)
		{
			if(arr[j][k]=='X')
				x_temp++;
			else if(arr[j][k]=='O')
				o_temp++;
			else
			{
				x_temp=0;
				o_temp=0;
				break;
			}
			k--;
		}
		if(x_temp==3)
			x_win++;
		if(o_temp==3)
			o_win++;
		
		if(x_win==1 && o_win==0 && x_count-o_count==1)
			printf("yes\n");
		else if(x_win==2 && o_win==0 && x_count-o_count==1)
			printf("yes\n");
		else if(o_win==1 && x_win==0 && x_count==o_count)
			printf("yes\n");
		else if(x_win==0 && o_win==0)
		{
			if(x_count==o_count || x_count-o_count==1)
				printf("yes\n");
			else
				printf("no\n");
		}
		else
			printf("no\n");
	}
	return 0;
}
