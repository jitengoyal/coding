#include<stdio.h>
int main(){int i,t,n,j,c,max;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=1;
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<c;j++)
				scanf("%d",&a[i][j]);
			c++;
		}
		c=2;
		for(i=1;i<n;i++)
		{
			for(j=0;j<c;j++)
			{
				if(j==0)
					a[i][j]+=a[i-1][j];
				if(j==c-1)
					a[i][j]+=a[i-1][j-1];
				else
				{
					if(a[i-1][j]>=a[i-1][j-1])
						a[i][j]+=a[i-1][j];
					else
						a[i][j]+=a[i-1][j-1];
				}
			}c++;
		}
		max=0;
		for(i=0;i<n-1;i++)
		{
			printf("%d ",a[n-1][i]);
			if(a[n-1][i]>max)
				max=a[n-1][i];
		}
		printf("\n%d\n",max);
	}
	return 0;
}

