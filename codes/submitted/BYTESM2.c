#include<stdio.h>
int main()
{
	int num,l;
	scanf("%d",&num);
	for(l=0;l<num;l++)
	{

		int n,m,i,j;
		scanf("%d%d",&n,&m);
		int arr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		for(i=1;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(j==0)
				{
					if(arr[i-1][j]>=arr[i-1][j+1])
						arr[i][j]+=arr[i-1][j];
					else
						arr[i][j]+=arr[i-1][j+1];
				}
				else if(j==m-1)
				{
					if(arr[i-1][j]>=arr[i-1][j-1])
						arr[i][j]+=arr[i-1][j];
					else
						arr[i][j]+=arr[i-1][j-1];
				}
				else
				{
					int max;
					if(arr[i-1][j-1]>=arr[i-1][j])
						max=arr[i-1][j-1];
					if(arr[i-1][j]>=arr[i-1][j-1])
						max=arr[i-1][j];
					if(max<=arr[i-1][j+1])
						max=arr[i-1][j+1];
					arr[i][j]+=max;
				}
			}
		}
		int res=-1;
		for(j=0;j<m;j++)
		{
			if(arr[n-1][j]>=res)
				res=arr[n-1][j];
		}
		printf("%d\n",res);
	}
	return 0;
}
