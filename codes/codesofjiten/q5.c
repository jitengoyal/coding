#include<stdio.h>
int main()
{
	int i,j,r,c,n,max,hold,y,z;
	scanf("%d",&z);
	for(y=0;y<z;y++)
	{

		scanf("%d%d",&r,&c);
		int a[r][c];
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(j=1;j<c;j++)
		{
			for(i=0;i<r;i++)
			{
				hold=a[i][j];
				if(i==0)
				{
					if(a[i][j-1]>a[i+1][j-1])
						a[i][j]=hold+a[i][j-1];
					else
						a[i][j]=hold+a[i+1][j-1];
				}
				else if(i==r-1)
				{
					if(a[i][j-1]>a[i-1][j-1])
						a[i][j]=hold+a[i][j-1];
					else
						a[i][j]=hold+a[i-1][j-1];
				}
				else
				{
					if((a[i-1][j-1]>a[i][j-1])&&(a[i-1][j-1]>a[i+1][j-1]))
					{
						a[i][j]=hold+a[i-1][j-1];
					}
					if((a[i][j-1]>a[i-1][j-1])&&(a[i][j-1]>a[i+1][j-1]))
					{
						a[i][j]=hold+a[i][j-1];
					}
					if((a[i+1][j-1]>a[i-1][j-1])&&(a[i+1][j-1]>a[i][j-1]))
					{
						a[i][j]=hold+a[i+1][j-1];
					}
				}
			}
		}
		max=-9999999;
		for(i=0;i<r;i++)
		{
			if(a[i][c-1]>max)
			{
				max=a[i][c-1];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
