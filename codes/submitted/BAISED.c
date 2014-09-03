#include<stdio.h>
#include<string.h>

mergesort(long long int a[], long long int   low,  long long int high)
{
	long long int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
	return;
}

merge(long long int a[], long long int low, long long int high, long long int mid)
{
	long long int i, j, k, c[high+1];
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
    long long int n,k,i,num,j,counter;
    char string[1000];
    scanf("%lld",&num);
    for(i=0;i<num;i++)
    {
	    counter=0;
	    scanf("\n");

	    scanf("%lld",&n);
	    long long int arr[n];

	    for(j=0;j<n;j++)
	    {
		    scanf("%s",string);
		    scanf("%lld",&arr[j]);
	    }
	    mergesort(arr,0,n-1);

	/*    for(j=0;j<n;j++)
	    {
		    printf("%lld ",arr[j]);
	    }
	    printf("\n");*/
	    for(j=0;j<n;j++)
	    {
		    if(j+1-arr[j]>=0)
			    counter=counter+j+1-arr[j];
		    else
			    counter=counter-(j+1-arr[j]);
	    }
	    printf("%lld\n",counter);
	   
    }
    return 0;
}
