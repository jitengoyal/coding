#include<stdio.h>
#include<string.h>
int main()
{
	int i,num,n,j,k,x_count,o_count,x_win,o_win,x_temp,o_temp,counter,d;
	char a,arr[3][3],str[10];
	while(1)
	{
		d=0;
		x_count=0,o_count=0,x_win=0,o_win=0,x_temp=0,o_temp=0;
		scanf("%s",str);
		if(strcmp(str,"end")==0)
			break;

		counter=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				arr[j][k]=str[counter++];
				if(arr[j][k]=='X')
					x_count++;
				else if(arr[j][k]=='O')
					o_count++;
				else
					d++;
			}
		}

	/*	for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
				printf("%c",arr[j][k]);
			printf("\n");
		}*/

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

			if(o_count>x_count||(o_count==x_count&&x_win)||x_count>o_count+1||(x_count==o_count+1&&o_win)||x_win>2||o_win>1||(x_win && o_win))
				printf("invalid\n");
			else if((x_win && !o_win) || (!x_win && o_win)) printf("valid\n");
			else if(!x_win && !o_win && !d) printf("valid\n");
			else printf("invalid\n");

		/*
		
		if(x_win==1 && o_win==0 && x_count-o_count==1)
			printf("valid\n");
		else if(x_win==2 && o_win==0 && x_count-o_count==1)
			printf("valid\n");
		else if(o_win==1 && x_win==0 && x_count==o_count)
			printf("valid\n");
		else if(x_win==0 && o_win==0 && x_count+o_count<9)
			printf("invalid\n");
		else if(x_win==0 && o_win==0 && x_count+o_count==9)
			printf("invalid\n");
		else
			printf("invalid\n");*/
	}
	return 0;
}