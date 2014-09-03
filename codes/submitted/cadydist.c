#include<stdio.h>

mergesort(unsigned long long  a[], unsigned long long  low,  unsigned long long high)
{
	unsigned long long mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
	return(0);
}

merge(unsigned long long  a[], unsigned long long  low, unsigned long long high, unsigned long long mid)
{
	unsigned long long  i, j, k, c[100000];
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
	{
		a[i]=c[i];
	}
} 
int main()
{
	unsigned long long n,i;
	unsigned long long  ans;
	while(1)
	{
		ans=0;
		scanf("%llu",&n);
		if(n==0)
			break;
		unsigned long long  arr[n],arr1[n];
		for(i=0;i<n;i++)
		{
			scanf("%llu",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%llu",&arr1[i]);
		}
		mergesort(arr,0,n-1);
		mergesort(arr1,0,n-1);
		for(i=0;i<n;i++)
		{
			ans=ans+(arr[i]*arr1[n-1-i]);
		}
			printf("%llu\n",ans);
	}
	return 0;
}
