#include<stdio.h>
int main()
{
	int n,i,j,k,temp,b,hold,z,xxx,flag,a,min,f,g,min1;
	scanf("%d",&g);
	for(f=0;f<g;f++)
	{
		temp=0;flag=0,min1=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(j=n-1;j>0;j--)
		{
			if(arr[j]>arr[j-1])
			{
				temp=j;
				break;
			}
		}
		if(temp==0)
		{
			printf("\n"); continue;
		}
		hold=temp;
	/*	for(i=temp;i<n;i++)
		{
			min1=arr[temp];
			if(arr[temp]>arr[i+1])
			{
				min1=arr[i+1];
			}
			if(min1>arr[temp-1])
			{	
				hold=i;
				break;
			}
			printf("%d\n",hold);
		}
		z=arr[temp-1];
		arr[temp-1]=arr[hold];
		arr[hold]=z;*/
		for(i=temp;i<n;i++)
		{
			min=arr[i];
			for(j=i;j<n-1;j++)
			{
				if(min>arr[j+1])
				{
					min=arr[j+1];
					z=arr[j+1];
					arr[j+1]=arr[i];
					arr[i]=z;		
				}
			}
		}
		for(i=temp;i<n;i++)
		{
			if(arr[i]>arr[temp-1])
			{
				xxx=arr[i];
				arr[i]=arr[temp-1];
				arr[temp-1]=xxx;
				break;
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}	
