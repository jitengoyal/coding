#include<stdio.h>
#include<stdlib.h>
int n,m,i,j,x,y;
int **arr,**row,**col;
int func()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0 && j>0)
			{
				arr[i][j]=arr[i][j-1]+arr[i][j];
				row[i][j]=i;
				col[i][j]=j-1;
			}
			if(i!=0 && j==0)
			{
				arr[i][j]=arr[i-1][j]+arr[i][j];
				row[i][j]=i-1;
				col[i][j]=j;
			}
			if(i!=0 && j!=0)
			{
				if(arr[i-1][j]<=arr[i][j-1])
				{
					arr[i][j]=arr[i][j-1]+arr[i][j];
					row[i][j]=i;
					col[i][j]=j-1;
				}
				else
				{
					arr[i][j]=arr[i-1][j]+arr[i][j];
					row[i][j]=i-1;
					col[i][j]=j;
				}
			}
			if(i==0 && j==0)
			{
				row[i][j]=0;
				col[i][j]=0;
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
		row=(int**)malloc(sizeof(int)*(n));
		col=(int**)malloc(sizeof(int)*(n));
		for(i=0;i<n;i++)
		{
			arr[i]=(int*)malloc(sizeof(int)*(m));
			row[i]=(int*)malloc(sizeof(int)*(m));
			col[i]=(int*)malloc(sizeof(int)*(m));
		}
		int res;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		func();
		int arr1[1000];
		int arr2[1000];
		int ro=n-1,co=m-1,temp,counter=0;
		int min=0,ans,sum=0;
		while(1)
		{
			if(ro==0 && co==0)
				break;
			arr1[counter]=ro;
			arr2[counter]=co;
			counter++;
			temp=row[ro][co];
			co=col[ro][co];
			ro=temp;
		}
		for(i=counter-1;i>=0;i--)
		{	
			sum+=arr[arr1[i]][arr2[i]];
//			printf(": %d\n",arr[arr1[i]][arr2[i]]);
			if(sum<0)
				min=sum;
		}
		if(min==0)
			ans=1;
		else
			ans=-min+1;
		printf("%d\n",ans);
	}
	return 0;
}
