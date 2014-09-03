#include<stdio.h>
#include<stdlib.h>
int main()
{
	int prime[150],j,k,count=0;
	prime[0]=2;
	j=3;
	while(j*j<=500000)
	{
		int flag=0;
		k=2;
		while(k*k<=j)
		{
			if(j%k==0)
			{
				flag=1;
				break;
			}
			k++;
		}
		if(flag==0)
			prime[++count]=j;
		j++;
	}


	

	int num,i,n;
	int arr[1000],counter=0,no_div,hold;
	for(i=1;;i++)
	{
		hold=i;
		no_div=0;
		for(j=0;j<=count;j++)
		{
			if(prime[j]>i/2)
				break;
			if(hold%prime[j]==0)
			{
				no_div++;
				if(no_div==3)
					break;
				while(hold%prime[j]==0)
					hold=hold/prime[j];
			}
		}
		if(no_div>=3)
			arr[counter++]=i;
		if(counter==1000)
			break;
	}

	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		printf("%d\n",arr[n-1]);
	}
	return 0;
}
