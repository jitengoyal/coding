#include<stdio.h>
int main()
{
	int i,j,count,n,min,max,k,l,x,y;
	scanf("%d",&l);
	for(k=0;k<l;k++)
	{
		scanf("%d",&n);
		long long int arr[n],p[1000];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			t=i+1;
			for(x=min;x<n;x++)
			{
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
	}
		return 0;
}	
