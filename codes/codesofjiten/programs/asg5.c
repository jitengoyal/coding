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
	int n,z,counter,y;
	scanf("%d",&n);
	scanf("%d",&y);
	double sum=0,avg[n],age1,sum1,cntr;
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
// calculated the average age
	sum1=0;
	cntr=0;
	for(i=0;i<n;i++)
	{
		if(arr[i].ae>y)
		{
			sum1=arr[i].age+sum1;
			cntr++;
		}
	}
	age1=(sum1)/cntr;
	printf("%.4lf\n",age1);
	for(i=0;i<n;i++)
	{
	//	max[i]=arr[i].ae;
		min[i]=0;
		counter=0;
		sum=0;
		cntr=0;
		for(j=i;j<n;j++)
		{
			if(strcmp(arr[i].sd,arr[j].sd)==0)
			{
				if(j!=i)
					a[j]=0;
				if(arr[j].ae>y)
				{
					cntr++;
					min[i]=cntr;
				}
	//			if(arr[j].ae>max[i])
	//			{
	//				max[i]=arr[j].ae;
	//			}
	//			if(arr[j].ae<min[i])
	//			{
	//				min[i]=arr[j].ae;
	//			}
		//		sum=sum+arr[j].ae;
				counter++;
			}
		}
		//		avg[i]=(sum)/counter;
	}
	for(i=0;i<n;i++)
	{
			arr[i].minimum=min[i];
		//	arr[i].maximum=max[i];
		//	arr[i].average=avg[i];
	}
	for(i=0;i<n;i++)
	{
		
		
			arr[i].ascii=arr[i].sd[0]+arr[i].sd[1];
		
	}
	int k,temp;
	for(i=0;i<n;i++)
	{
		
		for(j=i;j<n;j++)
		{
			if(arr[j].ascii<arr[i].ascii)
			{
			jiten=arr[i];
			arr[i]=arr[j];
			arr[j]=jiten;
			
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;

			}
			else if(arr[j].ascii==arr[i].ascii)
			{
				if(arr[j].minimum>arr[i].minimum)
				{
				
				jiten=arr[i];
				arr[i]=arr[j];
				arr[j]=jiten;

				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
		}
	//	jiten=arr[i];
	//	arr[i]=arr[k];
	//	arr[k]=jiten;
		}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			printf("%s , %d\n",arr[i].sd,arr[i].minimum);
		}
	}
	return 0;
}
