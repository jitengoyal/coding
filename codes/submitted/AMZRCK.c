#include<stdio.h>
int main()
{
	int num,i,n;
	scanf("%d",&n);
	int arr[50];
	arr[1]=2;
	arr[2]=3;
	for(i=3;i<50;i++)
		arr[i]=arr[i-1]+arr[i-2];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		printf("%d\n",arr[num]);
	}
	return 0;
}
