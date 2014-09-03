#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,n,m,j,k,count,x[2],y[2];
	char a;
	int row[1000],col[1000];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		count=0;
		scanf("%d%d",&n,&m);
		char arr[25][25];
		for(j=0;j<n;j++)
		{
			scanf("%s",arr[j]);
			for(k=0;k<m;k++)
			{
				if((j==0 || j==n-1) || (k==0 || k==m-1))
				{
					if(arr[j][k]=='.')
					{
						if(count<2)
						{
							x[count]=j;
							y[count]=k;
						}
						count++;
					}
				}
			}
		}
		if(count==2)
		{
			int start=0,flag,flag1=0;
			row[0]=x[0];
			col[0]=y[0];
			arr[x[0]][y[0]]=1;
			while(start>=0)
			{
				flag=0;
				if(row[start]-1 >= 0 && arr[row[start]-1][col[start]]=='.')
				{
					flag=1;
					start++;
					row[start]=row[start-1]-1;
					col[start]=col[start-1];
					arr[row[start]][col[start]]=1;
				}
				else if(row[start]+1<n && arr[row[start]+1][col[start]]=='.')
				{
					flag=1;
					start++;
					row[start]=row[start-1]+1;
					col[start]=col[start-1];
					arr[row[start]][col[start]]=1;
				}
				else if(col[start]-1>=0 && arr[row[start]][col[start]-1]=='.')
				{
					flag=1;
					start++;
					row[start]=row[start-1];
					col[start]=col[start-1]-1;
					arr[row[start]][col[start]]=1;
				}
				else if(col[start]+1<m && arr[row[start]][col[start]+1]=='.')
				{
					flag=1;
					start++;
					row[start]=row[start-1];
					col[start]=col[start-1]+1;
					arr[row[start]][col[start]]=1;
				}


				if(row[start]==x[1] && col[start]==y[1])
				{
					flag1=1;
					break;
				}

				if(flag==0)
					start--;
				
			}
			if(flag1==1)
				printf("valid\n");
			else
				printf("invalid\n");
		}
		else
			printf("invalid\n");
	}
	return 0;
}
