#include<stdio.h>
int main()
{
	long long int num,i,n,sum,j,element,result;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		sum=0;
		result=1;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&element);
			sum=sum+element;
			if(sum<=0)
			{
				if(result<(sum)*(-1)+1)
					result=(sum)*(-1)+1;
			}
		}
		printf("Scenario #%lld: %lld\n",i+1,result);
	}
	return 0;
}
