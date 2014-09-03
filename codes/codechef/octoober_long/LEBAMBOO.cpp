#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,i,j,k,l,n,sum1,sum2,m,effect;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		sum1=sum2=0;
		scanf("%d",&n);
		int arr[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&m);
			sum1+=m;
			arr[j]=m;
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&m);
			sum2+=m;
		}
		sort(arr,arr+n);
		if(n==1)
		{
			if(sum2>=sum1)
				printf("%d\n",-1);
			else
				printf("%d\n",sum1-sum2);

			continue;
		}

		effect=n-2;

		if(sum2<sum1)
			printf("-1\n");

		else if(sum1==sum2)
		{
			if(effect==0)
				printf("%d\n",arr[n-1]-arr[0]);
			else
				printf("-1\n");
		}
		else
		{
			if((sum2-sum1)%effect==0)
				printf("%d\n",(sum2-sum1)/effect);
			else
				printf("-1\n");
		}
	}
	return 0;
}
