#include<stdio.h>
int main()
{
	int n,x,y,z,a,b,c,d,i,j,sum,a1,a2;
	char l,m;
	scanf("%d\n",&a1);
	for(a2=0;a2<a1;a2++)
	{
		scanf("%d\n",&n);
		int arr[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				arr[i][j]=0;
			}
		}
		scanf("%c%c%c",&l,&m,&l);
		while(m!='N')
		{
			sum=0;
			if(m=='E')
			{
				scanf("%d%d%d\n",&x,&y,&z);
				arr[x][y]=z;
			}
			else
			{
				scanf("%d%d%d%d\n",&a,&b,&c,&d);
				for(i=a;i<=c;i++)
				{
					for(j=b;j<=d;j++)
					{
						sum=sum+arr[i][j];
					}
				}
				printf("%d\n",sum);
			}
			scanf("%c%c%c",&l,&m,&l);
		}
	}
	return 0;
}
