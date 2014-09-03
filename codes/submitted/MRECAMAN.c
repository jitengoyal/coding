#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char *arr=(char*)malloc(sizeof(char)*100000000);
	int arr1[510000];
	arr1[0]=0;
	arr[0]=1;
	for(i=1;i<=500000;i++)
	{
		if(arr1[i-1]-i >0 && arr[arr1[i-1]-i]==0)
		{
			arr1[i]=arr1[i-1]-i;
			arr[arr1[i-1]-i]=1;
		}
		else
		{
			arr1[i]=arr1[i-1]+i;
			arr[arr1[i-1]+i]=1;
		}
	}

	int num;
	while(1)
	{
		scanf("%d",&num);
		if(num==-1)
			break;
		printf("%d\n",arr1[num]);
	}
	return 0;
}
