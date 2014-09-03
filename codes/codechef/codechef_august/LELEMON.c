#include<stdio.h>
int main()
{
	int test,i,j,k,l;
	long long int n,m;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%lld%lld",&n,&m);
		int rooms[m],num_bottles;
		for(j=0;j<m;j++)
			scanf("%d",&rooms[j]);
		int bottles[n][102];
		for(j=0;j<n;j++)
		{
			scanf("%d",&num_bottles);
			bottles[j][0]=num_bottles;
			for(k=1;k<=num_bottles;k++)
				scanf("%d",&bottles[j][k]);
		}
		for(j=0;j<n;j++)
		{
			for(k=1;k<bottles[j][0];k++)
			{
				for(l=k+1;l<=bottles[j][0];l++)
				{
					int temp;
					if(bottles[j][k]>bottles[j][l])
					{
						temp=bottles[j][k];
						bottles[j][k]=bottles[j][l];
						bottles[j][l]=temp;
					}
				}
			}
		}
/*		for(j=0;j<n;j++)
		{
			for(k=1;k<=bottles[j][0];k++)
			{
				printf("%d ",bottles[j][k]);
			}
			printf("\n");
		}
		printf("\n");*/
		long long int sum=0;
		for(j=0;j<m;j++)
		{
			if(bottles[rooms[j]][0]>0)
			{
				sum+=bottles[rooms[j]][bottles[rooms[j]][0]];
				bottles[rooms[j]][0]--;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}

