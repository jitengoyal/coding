#include<stdio.h>
#include<string.h>
int main()
{
	int x,y,a,b,i,sum;
	int count[4]={0};
	char arr[110];
	scanf("%s",arr);
	int l=strlen(arr);
	sum=l/2;
	for(i=0;i<l;i++)
	{
		if(arr[i]!='+')
			count[arr[i]-'0']++;	
	}
	for(i=1;i<=3;i++)
	{
		while(count[i]>0)
		{
			printf("%d",i);
			count[i]--;
			if(sum>0)
			{
				printf("+");
				sum--;
			}
		}
	}
	printf("\n");
	return 0;
}
