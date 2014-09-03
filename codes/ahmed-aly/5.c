#include<stdio.h>
int main()
{
	int row,col,i,j,k,l;
	char c;
	scanf("%d%d\n",&row,&col);
	int arr[row][col];
	int ro[row],co[col];
	for(i=0;i<row;i++)
	{	
		ro[i]=0;
		for(j=0;j<col;j++)
		{
			arr[i][j]=0;
			co[j]=0;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%c",&c);
			if(c=='S')
			{
				ro[i]=1;
				co[j]=1;
			}
		}
		scanf("%c",&c);
	}
	int count=0,flag,counter;
	for(i=0;i<row;i++)
	{
		if(ro[i]==0)
			count+=col;
	}
	for(j=0;j<col;j++)
	{
		counter=0;
		if(co[j]==1)
			continue;
		for(i=0;i<row;i++)
		{
			if(ro[i]==0)
				counter++;
		}
		count=count+row-counter;
	}
	printf("%d\n",count);
	return 0;
}
