#include<stdio.h>
#include<math.h>
int func(int arr[],int n);
int main()
{
	int x1,y1;
	scanf("%d",&y1);
	for(x1=0;x1<y1;x1++)
	{
		int i,j,n,store,result=0,steps=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					store=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=store;
				}
			}
		}
		int temp,b,hold,z,min,a;
		temp=1;
		while(temp!=0)
		{
			temp=0;
			result=result+func(arr,n);
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
				continue;
			}   
			hold=temp;
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
		}
		if(result==-1)
		{
			printf("%d\n",1);
		}
		else
		{
			printf("%d\n",result);
		}
	}
	return 0;
}
int func(int arr[],int n)
{
	int steps=0,t=0;
	int p,q,r,s,i,j;
	int num=sqrt(n);
	int sum[num];
	int counter=0;
	int arr1[num][num];
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			arr1[i][j]=arr[counter];
			counter++;
			if(arr[counter]==arr[counter-1])
			{
				t++;
			}
		}
	}
	if(t==n-1)
	{
		return -1;
	}
	for(p=0;p<num;p++)
	{
		sum[p]=0;
		for(q=0;q<num;q++)
		{
			sum[p]=sum[p]+arr1[p][q];
		}
		if(p>0&&sum[p]!=sum[p-1])
		{
			return steps;
		}
	}
	for(r=0;r<num;r++)
	{
		sum[r]=0;
		for(s=0;s<num;s++)
		{
			sum[r]=sum[r]+arr1[s][r];
		}
		if(r>0&&sum[r]!=sum[r-1])
		{
			return steps;
		}
	}
	steps++;
	return steps;
}
