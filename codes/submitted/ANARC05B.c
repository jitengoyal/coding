#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int i,n1,n2,index1,index2,sum1,sum2,max;
	int *array,*array1;
	while(1)
	{
		scanf("%lld",&n1);

		if(n1==0)
			break;



		array = (int*)malloc(sizeof(int)*n1);
		for(i=0;i<n1;i++)
		{
			scanf("%d",&array[i]);
		}
		scanf("%lld",&n2);
		array1 = (int*)malloc(sizeof(int)*n2);
		for(i=0;i<n2;i++)
		{
			scanf("%d",&array1[i]);
		}



		index1=0,index2=0,max=0,sum1=0,sum2=0;
		sum1=array[index1],sum2=array1[index2];


		while(index1<n1 && index2<n2)
		{
			if(array[index1]>array1[index2])
			{
				index2++;
				if(index2<n2)
					sum2=sum2+array1[index2];
			}
			else if(array1[index2]>array[index1])
			{
				index1++;
				if(index1<n1)
					sum1=sum1+array[index1];
			}
			else if(array[index1]==array1[index2])
			{
				if(sum1>=sum2)
					max=max+sum1;
				else
					max=max+sum2;

				index1++;
				index2++;
				sum1=-100000001;
				sum2=-100000001;

				if(index1<n1)
					sum1=array[index1];

				if(index2<n2)
					sum2=array1[index2];
			}
		}
		if(index1==n1)
		{
			index2++;
			while(index2<n2)
			{
				sum2=sum2+array1[index2];
				index2++;
			}

		}
		else if(index2==n2)
		{
			index1++;
			while(index1<n1)
			{
				sum1=sum1+array[index1];
				index1++;
			}
		}
		if(sum1!=-100000001 && sum2!=-100000001)	
		{
			if(sum1>=sum2)
				max=max+sum1;
			else
				max=max+sum2;
		}
		else if(sum1!=-100000001 && sum2==-100000001)
		{
			if(max<max+sum1)
				max=max+sum1;
		}
		else if(sum1==-100000001 && sum2!=-100000001)
		{
			if(max<max+sum2)
				max=max+sum2;
		}
		printf("%lld\n",max);
		free(array);
		free(array1);
	}
	return 0;
}
