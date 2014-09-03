#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&k);
	int max=-1;
	for(i=0;i<k;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
	int j=0,l;
	if(j==n-k)
		printf("%d",max);
	else
		printf("%d ",max);
	j=1;

	for(i=k;i<n;i++)
	{
		if(array[i-k]==max)
		{
			max=-1;
			for(l=i-k+1;l<=i;l++)
			{
				if(array[l]>max)
					max=array[l];
			}
		}
		else
		{
			if(array[i]>max)
				max=array[i];
		}
		if(j==n-k)
			printf("%d",max);
		else
			printf("%d ",max);
	}
	printf("\n");
	return 0;
}
