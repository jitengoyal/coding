#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **arr,i,j,k,l,N;
	arr=(int**)malloc(sizeof(int*)*10001);
	for(i=0;i<=10001;i++)
	{
		arr[i]=(int*)malloc(sizeof(int)*(1229));
	}
	int prime[1250],flag=0,count=0;
	i=2;
	while(i*i<=100000000)
	{
		j=2;
		flag=0;
		while(j*j<=i)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
			prime[count++]=i;
		i++;
	}
	int counter,hold;
	arr[2][0]=1;
	for(i=3;i<=10000;i++)
	{
		hold=i;
		for(j=0;j<count;j++)
		{
			counter=0;
			if(hold==1)
				break;
			while(hold%prime[j]==0)
			{
				counter++;
				hold/=prime[j];
			}
			arr[i][j]=counter;
		}
		for(j=0;j<count;j++)
		{
			if(prime[j]>i)
				break;
			arr[i][j]+=arr[i-1][j];
		}
	}
	scanf("%d",&N);

	for(j=0;j<count;j++)
	{
		if(arr[N][j]>0)
		{
			if(prime[j]==2)
				printf("%d^%d",prime[j],arr[N][j]);
			else
				printf(" * %d^%d",prime[j],arr[N][j]);
		}
	}
	printf("\n");
	return 0;
}
