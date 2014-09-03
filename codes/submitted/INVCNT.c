#include<stdio.h>
long long int counter;

mergesort(int a[], int   low,  int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
	return;
}

merge(int a[], int low, int high, int mid)
{
	int i, j, k, c[high+1];
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<=a[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			counter=counter+mid-i+1;
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
	{
		a[i]=c[i];
	}
}

int main()
{
	int n,k,i,num,j;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		int arr[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}
		counter=0;
		mergesort(arr,0,n-1);
		printf("%lld\n",counter);
	}
	return 0;
}
