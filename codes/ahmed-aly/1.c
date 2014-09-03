#include<stdio.h>
#include<string.h>
int main()
{
	int n,f,l,i,j;
	scanf("%d",&n);
	f=1;
	l=n*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			printf("%d ",f);
			f++;
		}
		for(j=0;j<n/2;j++)
		{
			if(j==n-1)
				printf("%d",l);
			else
				printf("%d ",l);
			l--;
		}
		printf("\n");
	}
	return 0;
}
