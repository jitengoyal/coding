#include<stdio.h>
int main()
{
	int n,i,j,k,temp,b,hold,z,flag,a,min,f,g;
	scanf("%d",&g);
	for(f=0;f<g;f++)
	{
		temp=0; k=0,flag=0;
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
	         // small=arr[i];		
	//		b=arr[temp-1]+k+1;
			for(j=temp;j<n;j++)
			{
				if(arr[j]==b)
				{
					hold=j;
					flag=1;
					break;
				}
			}
			if(flag==1) break;
			k++;
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
				int xxx=arr[temp-1];
				arr[temp-1]=arr[i];
				arr[i]=xxx;
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
