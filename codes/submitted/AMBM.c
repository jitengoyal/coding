#include<stdio.h>
int main()
{
	long long int num,i,j,k,n;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld%lld",&n,&k);
		long long int arr[k];

		for(j=0;j<k;j++)
		{
			scanf("%lld",&arr[j]);
			if(j>0)
				arr[j]=arr[j]+(arr[j-1])*2;

		}
		int flag=0;
		for(j=0;j<k;j++)
		{
			if(arr[j]==n)
			{
				flag=1;
				printf("%lld\n",j+1);
				break;
			}
			if(arr[j]>n)
				break;
		}
		if(flag!=1)
		{
			int hold=j;
			int flag2=0;
			j--;
			while(j>=0)
			{
				if(n-arr[j]>=0)
				{
					n=n-arr[j];
					arr[j]=0;
				}
				if(n==0)
				{
					flag2=1;
					break;
				}
				j--;
			}
			if(flag2==0)
				printf("-1\n");
			else
			{
				for(j=0;j<hold;j++)
				{
					if(arr[j]==0)
					{
						if(j!=hold-1)
							printf("%lld ",j+1);
						else
							printf("%lld\n",j+1);
					}
				}
			}
		}
	}
	return 0;
}
