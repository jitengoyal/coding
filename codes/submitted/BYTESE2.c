#include<stdio.h>
int main()
{
	int num,i,n,j,temp,k;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		int start[n],end[n];
		for(j=0;j<n;j++)
		{
			scanf("%d%d",&start[j],&end[j]);
		}
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(end[j]>end[k])
				{
					temp=end[j];
					end[j]=end[k];
					end[k]=temp;
					temp=start[j];
					start[j]=start[k];
					start[k]=temp;
				}
			}
		}
		int exit,max=0,sum;
		for(j=0;j<n;j++)
		{	
			exit=end[j];
			sum=1;
			for(k=j+1;k<n;k++)
			{
				if(start[k]<exit)
					sum++;
			}
			if(sum>max)
				max=sum;
		}
		printf("%d\n",max);
	}
	return 0;
}
