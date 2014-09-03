#include<stdio.h>
int main()
{
	int num,i,n,r,j,num1,num2,flag,k;
	char arr[1010];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		flag=0;
		for(k=0;k<1010;k++)
		{
			arr[k]=0;
		}
		scanf("%d%d",&n,&r);
		for(j=0;j<r;j++)
		{
			scanf("%d%d",&num1,&num2);
			if(arr[num1]==2 || arr[num2]==1)
				flag=1;
			arr[num1]=1;
			arr[num2]=2;
		}
		if(flag==1)
			printf("Scenario #%d: spied\n",i+1);
		else
			printf("Scenario #%d: spying\n",i+1);
	}
	return 0;
}
