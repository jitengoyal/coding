#include<stdio.h>
int main()
{
	int k,l;
	scanf("%d",&l);
	for(k=0;k<l;k++)
{
	int i,j,count=0,count1=0,sum,carry;
	char a,b;
	int arr[1000][1000],c[1000][1000]={0};
	scanf(" %c",&a);
	i=0,j=1;
	while(a!=' ')
	{
		arr[0][j]=(int)(a-48);
		j++;
		scanf("%c",&a);
		count++;
	}
	scanf("%c",&b);
	i=1,j=0;
	while(b!='\n')
	{
		arr[i][0]=(int)(b-48);
		i++;
		scanf("%c",&b);
		count1++;
	}
	for(i=1;i<=count1;i++)
	{
		for(j=1;j<=count;j++)
		{
			arr[i][j]=(arr[i][0])*(arr[0][j]);
		}
	}
//	for(i=1;i<=count1;i++)
//	{
//		for(j=1;j<=count;j++)
//		{
//			printf("%d\t",arr[i][j]);
//		}
//		printf("\n");
//	}
	int count2;
	for(i=0;i<=100;i++)
	{
		count2=0;
		for(j=i;j<=100;j++)
		{
			c[i][j]=arr[i+1][count2+1];
			count2++;
		}
	}
//	for(i=0;i<=count1;i++)
//	{
//		for(j=0;j<(count+count1-1);j++)
//		{
//			printf("%d\t",c[i][j]);
//		}
//		printf("\n");
//	}
	carry=0;
	for(j=(count+count1-2);j>=0;j--)
	{
		sum=0;
		for(i=0;i<count1;i++)
		{
			sum=sum+c[i][j];
			
		}
		sum=sum+carry;
	//	printf("%d\n",sum);
		if(j!=0)
		c[i][j]=sum%10;
		else
			c[i][j]=sum;
		carry=sum/10;
	}
	for(j=0;j<(count+count1-1);j++)
	{
		printf("%d",c[count1][j]);
	}
		printf("\n");
}
	return 0;
}		

		
	





	


	

