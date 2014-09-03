#include<stdio.h>
int main()
{
	int i,num,n,m,k,x,y;
	int x_count,y_count,hansel_count=0,getel_count=0,flag;

	char a;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d%d%d",&m,&n,&k);
		scanf("%c",&a);
		char arr[n][m];
		for(x=0;x<n;x++)
		{
			for(y=0;y<m;y++)
				scanf("%c",&arr[x][y]);
			scanf("%c",&a);
		}

		//for rows
		flag=0;
		for(x=0;x<n;x++)
		{
			x_count=0,y_count=0;
			for(y=0;y<m;y++)
			{
				if(arr[x][y]=='x')
				{
					x_count++;
					y_count=0;
				}
				else if(arr[x][y]=='o')
				{
					y_count++;
					x_count=0;
				}				
				else
				{
					x_count=0;
					y_count=0;
				}
				if(x_count==k)
					hansel_count++;
				if(y_count==k)
					getel_count++;
				if(x_count==k || y_count==k)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}

		//for columns
		if(flag!=1)
		{
			for(y=0;y<m;y++)
			{
				x_count=0,y_count=0;
				for(x=0;x<n;x++)
				{
					if(arr[x][y]=='x')
					{
						y_count=0;
						x_count++;
					}
					else if(arr[x][y]=='o')
					{
						x_count=0;
						y_count++;
					}
					else
					{
						x_count=0;
						y_count=0;
					}
					if(x_count==k)
						hansel_count++;
					if(y_count==k)
						getel_count++;
					if(x_count==k || y_count==k)
					{
						flag=2;
						break;
					}
				}
				if(flag==2)
					break;
			}
		}

		//for diagonals
		int hold1,hold2,check=0;
		if(flag!=1 && flag!=2)
		{
			for(x=0;x<n;x++)
			{
				for(y=0;y<m;y++)
				{
					hold1=x,hold2=y,x_count=0,y_count=0;
					while(hold1<n && hold2<m)
					{
						if(arr[hold1][hold2]=='x')
						{
							x_count++;
							y_count=0;
						}
						else if(arr[hold1][hold2]=='o')
						{
							x_count=0;
							y_count++;
						}
						else
						{
							x_count=0;
							y_count=0;
						}
						if(x_count==k)
							hansel_count++;
						if(y_count==k)
							getel_count++;
						if(x_count==k || y_count==k)
						{
							check=1;
							break;
						}
						hold1++;
						hold2++;
					}
					if(check==1)
						break;

					hold1=x,hold2=y;
					x_count=0,y_count=0;
					while(hold1<n && hold2>=0)
					{
						if(arr[hold1][hold2]=='x')
						{
							x_count++;
							y_count=0;
						}
						else if(arr[hold1][hold2]=='o')
						{
							x_count=0;
							y_count++;
						}
						else
						{
							x_count=0;
							y_count=0;
						}
						if(x_count==k)
							hansel_count++;
						if(y_count==k)
							getel_count++;
						if(x_count==k || y_count==k)
						{
							check=1;
							break;
						}
						hold1++;
						hold2--;
					}
					if(check==1)
						break;
				}
				if(check==1 || check==2)
					break;
			}
		}
	}
	printf("%d:%d\n",hansel_count,getel_count);
	return 0;
}
