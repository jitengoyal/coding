#include<stdio.h>
int main()
{
	int i,num,n,count,a,b,j,k,l;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		count=0;
		scanf("%d",&n);
		char arr[n][n];
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				arr[j][k]=0;
			}
		}
		for(j=0;j<n;j++)
		{
			scanf("%d %d",&a,&b);
			arr[a][b]=1;
		}

		int flag=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(arr[j][k]==1)
				{
					flag=0;
					for(l=0;l<n;l++)
					{
						if((arr[k][l]==1 || arr[k][l]=='d') && (arr[j][l]==0))
						{
							arr[j][l]=1;
							flag=1;
							count++;
						}
					}
					arr[j][k]='d';
					if(flag==1)
						k=-1;
				}
			}
		}
		printf("Case #%d: %d\n",i+1,count);
	}
	return 0;
}
