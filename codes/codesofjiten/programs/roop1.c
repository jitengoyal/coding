#include<stdio.h>
#include<string.h>
struct node
{
	int ri,ae,age,ascii,min,max;
	char name[100],sd[3] ;
	int minimum;
	int maximum;
	double average;
};
int main()
{
	struct node jiten;
	int n,z,counter;
	scanf("%d",&n);
	double sum,avg[n];
	int i,j,t,p,min[n],a[n],max[n],asc[n];
	struct node arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%*c%*c%*c%[^,]%*c%d%*c%*c%*c%s%*c%*c%*c%d",&arr[i].ri,arr[i].name,&arr[i].age,arr[i].sd,&arr[i].ae);
	}
	for(i=0;i<n;i++)
	{
		a[i]=1;
	}
	for(i=0;i<n;i++)
	{
		max[i]=arr[i].ae;
		min[i]=arr[i].ae;
		counter=1;
		sum=arr[i].ae;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(arr[i].sd,arr[j].sd)==0 && (a[j]!=0))
			{
					a[j]=0;
				if(arr[j].ae>max[i])
				{
					max[i]=arr[j].ae;
				}
				if(arr[j].ae<min[i])
				{
					min[i]=arr[j].ae;
				}
				sum=sum+arr[j].ae;
				counter++;
			}
		}
				avg[i]=(sum)/counter;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			arr[i].minimum=min[i];
			arr[i].maximum=max[i];
			arr[i].average=avg[i];
		}
	}
/*	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			printf("%d %d %lf\n",max[i],min[i],avg[i]);
		}
	}*/
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			arr[i].ascii=arr[i].sd[0]+arr[i].sd[1];
//			printf("%d",arr[i].ascii);
		}
	}
//	for(i=0;i<n;i++)
//	{
//			printf("%d ",arr[i].ascii);
//	}
	int k;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		k=i;
		for(j=i;j<n && a[j]!=0;j++)
		{
			if(arr[j].ascii<arr[k].ascii)
			{
				k=j;
				continue;
			}
			else if(arr[j].ascii==arr[k].ascii)
			{
				if(arr[j].maximum>arr[k].maximum)
					k=j;
				continue;
			}
		}
		jiten=arr[i];
		arr[i]=arr[k];
		arr[k]=jiten;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			printf("%s , %d , %d , %.4f , %d\n",arr[i].sd,arr[i].maximum,arr[i].minimum,arr[i].average,arr[i].ascii);
		}
	}
	return 0;
}
