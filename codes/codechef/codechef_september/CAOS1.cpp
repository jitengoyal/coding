#include<stdio.h>
#include<iostream>
int main()
{
	int num,row,col,k,i,j,counter,l;
	char c;
	scanf("%d",&num);
	for(l=0;l<num;l++)
	{
		counter=0;
		scanf("%d%d%c",&row,&col,&c);
		char arr[row][col];
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				scanf("%c",&arr[j][k]);
			scanf("%c",&c);
		}
		if(row > 4 && col > 4) 
		{
			for(i=2;i<row-2;i++)
			{
				for(j=2;j<col-2;j++)
				{
					if(arr[i][j]=='#')
						continue;
					if(arr[i-1][j] == '^' && arr[i-2][j]== '^' && arr[i+1][j]=='^' && arr[i+2][j]=='^' && arr[i][j-1]=='^' && arr[i][j-2]=='^' && arr[i][j+1]=='^' && arr[i][j+2]=='^')
						counter++;
				}
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}
