#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[1000];
	long long int num,i,n,count,sum,hold;
	for(i=0;i<1000;i++)
	{
		arr[i]=0;
	}
	scanf("%lld",&num);
	for(i=1;i<=num;i++)
	{
		count=0;
		scanf("%lld",&n);
		hold=n;
		if(hold==1)
			printf("%lld\n",count);
		else
		{
			while(1)
			{
				sum=0;
				while(hold!=0)
				{
					int t=hold%10;
					sum+=t*t;
					hold/=10;
				}
				count++;
				if(sum==1)
				{
					printf("%lld\n",count);
					break;
				}
				if(arr[sum]==i)
				{
					printf("-1\n");
					break;
				}
				hold=sum;
				arr[sum]=i;
			}
		}
	}
	return 0;
}

