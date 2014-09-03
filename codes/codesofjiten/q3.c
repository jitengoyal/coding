#include<stdio.h>
int main()
{
	int i,j,n,r,k,l;
	scanf("%d",&l);
	for(k=0;k<l;k++)
	{
		scanf("%d%d",&n,&r);
		int a[n+1][n+1];
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=i;j++)
			{
				if((i==j)||(j==0))
				{
					a[i][j]=1;
				}
				else
				{
					a[i][j]=(a[i-1][j]+a[i-1][j-1])%1000000007;
				}
			}
		}
		printf("%d\n",a[n][r]);
	}
	return 0;
}

