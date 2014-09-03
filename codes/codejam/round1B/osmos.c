#include<stdio.h>
int main()
{
	int testcases,num,size,n,i,temp,j,count,count1;
	scanf("%d",&testcases);
	for(num=0;num<testcases;num++)
	{
		count=0;
		scanf("%d%d",&size,&n);
		int array[n];

		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}

		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(array[i]>array[j])
				{
					temp=array[i];	
					array[i]=array[j];
					array[j]=temp;
				}
			}
		}
		
		int size1;
		int count1=0;
		for(i=0;i<n;i++)
		{
			if(size>array[i])
				size=size+array[i];
			else if(array[i]>=size)
			{
				count1=0;
				size1=size;
				while(1)
				{
					if(size1-1==0)
					{
						count++;
						break;
					}
					size1=size1+(size1-1);
			//		printf("%d %d\n",size1,count1);
					count1++;
					if(size1>array[i])
					{
						size1=size1+array[i];
						break;
					}
				}
				if(count+count1<count+n-i)
				{
					size=size1;
					count=count+count1;
				}
				else if(count+count1>=count+n-i)
				{
					count=count+n-i;
					break;
				}

	/*			if(count+count1<count+n-i && count+count1<n)
				{
					size=size1;
					count=count+count1;
				}
				else if(count+count1>count+n-i && count+n-i<=n)
				{
					count=count+n-i;
					break;
				}
				else if(count+count1>count+n-i && count+n-i>n)
				{
					count=n;
					break;
				}*/

			}
		}
		if(count>n)
			count=n;
		printf("Case #%d: %d\n",num+1,count);
	}
	return 0;
}
