#include<stdio.h>
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
	return(0);
}

merge(int a[], int low, int high, int mid)
{
	int i, j, k, c[high+1];
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
    int n,k,i;
    scanf("%d%d",&n,&k);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    mergesort(array,0,n-1);
    int result,counter=0;
    for(i=0;i<n-1;i++)
    {
        result=find(array,i+1,n-1,i,k);
        if(result==1)
        {
            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}

int find(int array[],int low,int high,int pos,int diff)
{
    int mid;
    if(low>high)
    {
        return 0;
    }
    else
    {
        mid=(low+high)/2;
        if(array[mid]==array[pos]+diff)
        {
            return 1;
        }
        else if(array[mid]>array[pos]+diff)
        {
            find(array,low,mid-1,pos,diff);
        }
        else
        {
            find(array,mid+1,high,pos,diff);
        }
    }
}
