#include<stdio.h>
int main()
{
	int i,j,count,n,max;
	scanf("%d",&n);
	long long int arr[n],p[1000];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0; 
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{	
				count=count+1;
			}
		}
		p[i]=count;
	}
		max=p[0];		
		for(i=0;i<n;i++)
		{
			if(max<p[i])
			{
				max=p[i];
			}
		}
	printf("%d",max);
	return 0;
}	
