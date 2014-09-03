#include<stdio.h>
int main()
{
	int t,l;
	scanf("%d\n",&t);
	for(l=0;l<t;l++)
	{
		int i=0,j;
		char a,arr[52];
		scanf("%c",&a);
		while(a!='\n')
		{
			arr[i++]=a;
			scanf("%c",&a);
		}
		for(j=(i+1)/2-1;j>=0;j--)
		{
			printf("%c",arr[j]);
		}
		for(j=i-1;j>(i+1)/2-1;j--)
		{
			printf("%c",arr[j]);
		}
		printf("\n");
	}
	return 0;
}
