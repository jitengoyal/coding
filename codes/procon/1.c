#include<stdio.h>
int main()
{
	int i,j,k,l,x,y,L,U,hold,sum,num;
	scanf("%d",&num);
	int a[37]={0};
	a[2]=a[3]=a[5]=a[7]=a[11]=a[13]=a[17]=a[19]=a[23]=a[29]=a[31]=1;
	int arr[10001];
	arr[1]=1;
	i=2;
	while(i<=10000)
	{
		sum=0;
		hold=i;
		while(hold>0)
		{
			sum=sum+hold%10;
			hold/=10;
		}
		arr[i]=sum;
		i++;
	}
	int counter;
	for(i=0;i<num;i++)
	{
		scanf("%d",&L);
		scanf("%d",&U);
		counter=0;
		for(j=L;j<=U;j++)
		{
			if(a[arr[j]]==1)
				counter++;
		}
		printf("%d\n",counter);
	}
	return 0;
}
