#include<stdio.h>
#include<stdlib.h>
int main()
{
	//num is the total number of the matchsticks
	int i,num,query,j,l,r,k,min,max,max1;
	scanf("%d",&num);
	int array[num];
	int array1[num];
	int index[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
		array1[i]=array[i];
		index[i]=i;
	}
	scanf("%d",&query);
	
	int temp,flag,temp1;
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(array1[j]>array1[i])
			{
				temp=array1[i];;
				array1[i]=array1[j];
				array1[j]=temp;
				temp1=index[i];
				index[i]=index[j];
				index[j]=temp1;
			}
		}
	}


/*	for(i=0;i<num;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",index[i]);
	}
	printf("\n");*/

	for(j=0;j<query;j++)
	{
		scanf("%d%d",&l,&r);
		k=l;
		max=0;
		max1=0;
		min=100000005;

		i=0;
		while(i<num)
		{
			if(index[i]<l || index[i]>r)
			{
				if(array1[i]>max)
					max=array1[i];
				break;
			}
			i++;
		}

		while(k<=r)
		{
			if(array[k]<min)
				min=array[k];

			if(array[k]>max1)
				max1=array[k];
			k++;
		}
		float result=((max1-min)*(1.0))/2.0+ min*(1.0);
		float result1=(max+min)*(1.0);
		if(result>result1)
			printf("%.1f\n",result);
		else
			printf("%.1f\n",result1);
	}
	return 0;
}
