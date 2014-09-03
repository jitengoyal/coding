#include<stdio.h>
int main()
{
	int num,i,n;
	scanf("%d",&num);
	int arr[15]={0,0, 6, 12, 90, 360, 2040, 10080, 54810, 290640, 1588356, 8676360, 47977776, 266378112, 1488801600};
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		printf("%d\n",arr[n]);
	}
	return 0;
}
