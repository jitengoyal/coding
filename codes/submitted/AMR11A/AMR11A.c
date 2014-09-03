#include<stdio.h>
#include<stdlib.h>
int n,m,i,j,x,y;
int **arr;
int func()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0 && j>0)
				arr[i][j]=arr[i][j-1]+arr[i][j];
			if(i!=0 && j==0)
				arr[i][j]=arr[i-1][j]+arr[i][j];
			if(i!=0 && j!=0)
			{
				if(arr[i-1][j]<=arr[i][j-1])
					arr[i][j]=arr[i][j-1]+arr[i][j];
				else
					arr[i][j]=arr[i-1][j]+arr[i][j];
			}
		}
	}
}

int main()
{
	scanf("%d",&x);
	for(y=0;y<x;y++)
	{
		scanf("%d%d",&n,&m);
		arr=(int**)malloc(sizeof(int)*(n));
		for(i=0;i<n;i++)
			arr[i]=(int*)malloc(sizeof(int)*(m));
		int res;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		func();
		int row,col,min,sum=0;
		row=0,col=0,min=0;

		while(1)
		{
			if(row==n-1 && col==m-1)
				break;
//			printf("init: %d %d\n",row,col);
			if(row+1<n && col+1<m)
			{
				if(arr[row+1][col]>=arr[row][col+1])
				{
					row++;
					sum+=arr[row][col];
					if(sum<min)
						min=sum;
				}
				else
				{
					col++;
					sum+=arr[row][col];
					if(sum<min)
						min=sum;
				}
			}
			else if(row+1==n)
			{
				col++;
				sum+=arr[row][col];
				if(sum<min)
					min=sum;
			}
			else if(col+1==m)
			{
				row++;
				sum+=arr[row][col];
				if(sum<min)
					min=sum;
			}
//			printf("fina: %d %d\n",row,col);
//			printf("min %d\n",min);
		}
		int ans;
		if(min==0)
			ans=1;
		else if(min<0)
			ans=-min+1;
		printf("%d\n",ans);
	}
	return 0;
}


