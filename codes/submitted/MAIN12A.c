#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,n,test;
	scanf("%d",&test);

	int *arr=(int*)malloc(sizeof(int)*1000001);
	num=1;
	int front =0,last=0,times,copy;

	arr[front]=1;
	last++;
	while(last<1000000)
	{
		times=arr[front++];
		num++;
		while(times)	
		{
			arr[last]=num;
			last++;
			if(last>1000000)
				break;
			times--;
		}
	}
/*	for(i=0;i<=10;i++)
	{
		printf("%d ",arr[i]);
	}*/

	for(i=0;i<test;i++)
	{
		scanf("%d",&n);
		printf("Case #%d: %d\n",i+1,arr[n-1]);
	}
	return 0;
}
