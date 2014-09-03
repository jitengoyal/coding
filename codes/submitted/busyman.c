#include<stdio.h>

mergesort(int a[], int low,  int high, int b[])
{
	int  mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid,b);
		mergesort(a,mid+1,high,b);
		merge(a,low,high,mid,b);
	}
	return(0);
}

merge(int  a[], int low, int high, int mid,int b[])
{
	int i, j, k, c[high+1],d[high+1];
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<a[j])
		{
		    d[k]=b[i];
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
		    d[k]=b[j];
            c[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
	    d[k]=b[i];
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
	    d[k]=b[j];
		c[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<k;i++)
	{
		a[i]=c[i];
		b[i]=d[i];
	}
}


int main()
{
    int t,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
    int n,i,j;
    scanf("%d",&n);
    int start[n];
    int end[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&start[i],&end[i]);
    }
    mergesort(end,0,n-1,start);
    /*for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(end[j]<end[i])
            {
                int hold=end[j];
                end[j]=end[i];
                end[i]=hold;
                int hold1=start[j];
                start[j]=start[i];
                start[i]=hold1;
            }
        }
    }*/
    int counter=1,t=0;
    for(i=0;i<n;i++)
    {
        if(end[t]<=start[i])
        {
            counter++;
            t=i;
        }
     //   printf("%d ",start[i]);
      //  printf("%d\n",end[i]);
    }
    printf("%d\n",counter);
    }
    return 0;
}
