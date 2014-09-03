#include<stdio.h>
int main()
{
	int i,a,b,test,j,k,num=1;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%d%d",&a,&b);
		int arr[a][b];
		for(j=0;j<a;j++)
		{
			for(k=0;k<b;k++)
			{
				scanf("%d",&arr[j][k]);
			}
		}
		num=1;
		while(1)
		{
			int flag=0,count=0;
			for(j=0;j<a;j++)
			{
				count=0;
				for(k=0;k<b;k++)
				{
					if(arr[j][k]<=num)
					{
						count++;
					}
				}
				if(count==b)
				{
					for(k=0;k<b;k++)
					{
						arr[j][k]=0;
					}
				}
			}
			for(k=0;k<b;k++)
			{
				count=0;
				for(j=0;j<a;j++)
				{
					if(arr[j][k]<=num)
					{
						count++;
					}
					if(count==a)
					{
						for(j=0;j<a;j++)
						{
							arr[j][k]=0;
						}
					}
				}
			}
/*			for(j=0;j<a;j++)
			{
				for(k=0;k<b;k++)
					printf("%d ",arr[j][k]);
				printf("\n");
			}*/
			int haha=0,haha1=0;
			for(j=0;j<a;j++)
			{
				for(k=0;k<b;k++)
				{
					if(arr[j][k]==num)
					{
						haha=1;
						break;

					}
				}
				if(haha==1)
					break;
			}
			if(haha==1)
			{
				printf("Case #%d: NO\n",i+1);
				break;
			}
			for(j=0;j<a;j++)
			{
				for(k=0;k<b;k++)
				{
					if(arr[j][k]==0)
						haha1++;
				}
			}
			if(haha1==a*b)
			{
				printf("Case #%d: YES\n",i+1);
				break;
			}
			num++;
		}
	}
	return 0;
}
