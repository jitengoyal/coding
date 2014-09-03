#include<stdio.h>
#include<string.h>
int main()
{
	int num,i;
	char arr[1000000];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",arr);
		int len=strlen(arr);
		if(arr[len/2]==arr[(len/2)-1])
			printf("Do-it\n");
		else
			printf("Do-it-Not\n");
	}
	return 0;
}
