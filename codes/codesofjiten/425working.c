#include<stdio.h>
int main()
{
	int x1,y1;
	scanf("%d",&y1);
	for(x1=0;x1<y1;x1++)
	{
		int i,j,n,store,result=0,steps=0,counter;
		scanf("%d",&n);
		int a[n],array[1000]={0};
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int k=0;
		for(i=0;i<2*n;i++)
		{
			array[i]=a[k];
			k++;
			if(k==n)
			{
				k=0;
			}
		}
		for(i=0;i<2*n-1;i++)
		{
			for(j=0;j<2*n-1;j++)
			{
				if(array[j]>array[j+1])
				{
					store=array[j];
					array[j]=array[j+1];
					array[j+1]=store;
				}
			}
		}
		int m, b[1000]={0},flag1=0;
		for(i=0;i<2*n;i++)
		{
			b[2*n-1-i]=array[i];
		}
		while(flag1!=1)
		{
			result=0;
			int d1,d2,temp,d3,d4,d5; long int min=999999999;
			for(i=0;i<2*n-1;i++)
			{
				result=0;
				if(i+array[i]<2*n)
				{
					if(array[i]==array[array[i]+i+1])
					{
						result=1;
					}
					else
					{
						if(i-array[i]>=0)
						{
							if(array[i]==array[i-array[i]-1])
							{
								result=1;
							}
							else 
							{
								break;
							}
						}
					}
				}
				else
				{
					break;
				}
			}
			//	for(i=0;i<2*n;i++)
			//	{
			//		printf("%d",array[i]);
			//	}
			//	printf("\n");
			if(result==1)
			{
				for(i=0;i<2*n;i++)
				{
					printf("%d ",array[i]);
				}
				printf("\n");
				break;
			}
			else
			{
				printf("\n");
			}
			for(i=0;i<2*n;i++)
			{
				for(j=2*n-1;j>0;j--)
				{
					if(array[j]>array[j-1])
					{
						for(d5=j;d5<2*n;d5++)
						{
							if(array[d5]>array[j-1]&&min>=array[d5])
							{
								min=array[d5];
								d4=d5;
							}
						}
						temp=array[j-1];
						array[j-1]=min;
						array[d4]=temp;
						for(d1=j;d1<2*n;d1++)
						{
							for(d2=d1+1;d2<2*n;d2++)
							{
								if(array[d2]<array[d1])
								{
									d3=array[d2];
									array[d2]=array[d1];
									array[d1]=d3;
								}
							}
						}
						break;
					}
				}
				m=0;
				for(i=0;i<2*n;i++)
				{
					if(array[i]==b[i])
					{
						m++;
					}
				}
				if(m==2*n)
				{
					flag1=1;
				}
			}
		}
	}
	return 0;
}
