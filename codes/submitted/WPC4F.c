#include<stdio.h>
int main()
{
	int num,l;
	scanf("%d",&num);
	for(l=0;l<num;l++)
	{

		int n,m,i,j;
		scanf("%d",&n);
		int arr[n][3];
		for(i=0;i<n;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		for(i=1;i<n;i++)
		{
			for(j=0;j<3;j++)
			{
				if(j==0)
				{
					if(arr[i-1][1]>=arr[i-1][2])
						arr[i][j]+=arr[i-1][2];
					else
						arr[i][j]+=arr[i-1][1];
				}
				else if(j==1)
				{
					if(arr[i-1][0]>=arr[i-1][2])
						arr[i][j]+=arr[i-1][2];
					else
						arr[i][j]+=arr[i-1][0];
				}
				else
				{
					if(arr[i-1][0]>=arr[i-1][1])
						arr[i][j]+=arr[i-1][1];
					else
						arr[i][j]+=arr[i-1][0];
				}
			}
		}
		int res=100000000;
		for(j=0;j<3;j++)
		{
			if(arr[n-1][j]<=res)
				res=arr[n-1][j];
		}
		printf("%d\n",res);
	}
	return 0;
}
