#include<stdio.h>
int main()
{
	int i,num,j,k;
	scanf("%d\n",&num);
	char arr[4][4],aa;
	int count=0;
	int t_row,t_col;
	for(i=0;i<num;i++)
	{
		for(j=0;j<4;j++)
		{
			count=0;
			scanf("%c",&aa);
			while(aa!='\n')
			{
				if(aa=='T')
				{
					t_row=j;
					t_col=count;
				}
				arr[j][count]=aa;
				count++;
				scanf("%c",&aa);
			}
		}


		int counter=4,counter1=0,x_count=0,y_count=0,em_count_r=0,em_count_c=0,flag1=0,flag2=0,flag3=0;

		//for checking of rows
		for(k=0;k<4;k++)
		{
			counter1=0;
			x_count=0;
			y_count=0;
			while(counter1<counter)
			{
				if(arr[k][counter1]=='X' || arr[k][counter1]=='T')
				{
					x_count++;
				}
				else if(arr[k][counter1]=='O' || arr[k][counter1]=='T')
				{
					y_count++;
				}
				else if(arr[k][counter1]=='.')
				{
					em_count_r=1;
				}
				counter1++;
			}

			if(x_count==4)
			{
				flag1=1;
				printf("Case #%d: X won\n",i+1);
				break;
			}
			if(y_count==4)
			{
				flag1=1;
				printf("Case #%d: O won\n",i+1);
				break;
			}
		}

		//for checking columns
		if(flag1!=1)
		{
			for(k=0;k<4;k++)
			{
				counter1=0;
				x_count=0;
				y_count=0;
				while(counter1<counter)
				{
					if(arr[counter1][k]=='X' || arr[counter1][k]=='T')
					{
						x_count++;
					}
					else if(arr[counter1][k]=='O' || arr[counter1][k]=='T')
					{
						y_count++;
					}
					else if(arr[counter1][k]=='.')
					{
						em_count_c=1;
					}
					counter1++;
				}

				if(x_count==4)
				{
					flag2=1;
					printf("Case #%d: X won\n",i+1);
					break;
				}
				if(y_count==4)
				{
					flag2=1;
					printf("Case #%d: O won\n",i+1);
					break;
				}
			}
		}

		//for diagonals
		if(flag1!=1 && flag2!=1)
		{
			counter1=0,x_count=0,y_count=0;
			while(counter1<counter)
			{	
				if(arr[counter1][counter1]=='X' || arr[counter1][counter1]=='T')
				{
					x_count++;
				}
				if(arr[counter1][counter1]=='O' || arr[counter1][counter1]=='T')
				{
					y_count++;
				}
				counter1++;
			}
			if(x_count==4)
			{
				flag3=1;
				printf("Case #%d: X won\n",i+1);
			}
			if(y_count==4)
			{
				flag3=1;
				printf("Case #%d: O won\n",i+1);
			}
		}

		if(flag1!=1 && flag2!=1 && flag3!=1)
		{
			x_count=0,y_count=0,counter1=0;
			int str=0,end=3;
			while(counter1<counter)
			{
				if(arr[str][end]=='X' || arr[str][end]=='T')
				{
					x_count++;
				}
				if(arr[str][end]=='O' || arr[str][end]=='T')
				{
					y_count++;
				}
				end--;
				str++;
				counter1++;
			}
			if(x_count==4)
			{
				flag3=1;
				printf("Case #%d: X won\n",i+1);
			}
			if(y_count==4)
			{
				flag3=1;
				printf("Case #%d: O won\n",i+1);
			}
		}


		if(flag1!=1 && flag2!=1 && flag3!=1) 
		{
			if(em_count_r==1 || em_count_c==1)
			{
				printf("Case #%d: Game has not completed\n",i+1);
			}
			else
			{
				printf("Case #%d: Draw\n",i+1);
			}
		}
		scanf("%c",&aa);
	}
//	scanf("%c",&aa);
	return 0;
}
