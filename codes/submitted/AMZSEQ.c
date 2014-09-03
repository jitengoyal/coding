#include<stdio.h>
int main()
{
	int arr[30],i,num;
	arr[0]=1;
	arr[1]=3;
	for(i=2;i<30;i++)
	{
		arr[i]=(arr[i-1])*2+arr[i-2];
	}
	scanf("%d",&num);
	printf("%d\n",arr[num]);
	return 0;
}
