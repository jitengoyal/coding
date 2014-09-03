#include<stdio.h>
mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
	return(0);
}

merge(int a[] ,int low,int high,int mid)
{
	int i,j,k,c[high+1];
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=a[j];
			k++;
			j++;
		}
	}

	while(i<=mid)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		c[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<k;i++)
		a[i]=c[i];
}

int main()
{
	int num,i,n,k,j;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d%d",&n,&k);
		int arr[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}
		mergesort(arr,0,n-1);
		if(k==1)
			printf("%d\n",0);
		else
		{
			int min=1000000001;
			k=k-1;
			for(j=0;j<n-k;j++)
			{
				if(min==1)
					break;
				if(arr[j+k]-arr[j]<min)
					min=arr[j+k]-arr[j];
			}
			printf("%d\n",min);
		}
	}
	return 0;
}
