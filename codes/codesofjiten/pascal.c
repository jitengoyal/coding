#include<stdio.h>
int main()
{
	int i,j,n,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=i;
		for(j=0;j<(2*n-1);j++)
		{
			
			if(((i+j)>=n-1)&&(i+j<(2*i)+n))
			{
				if(j<n)
				{
					printf("%d",i+j-(n-2));
				}
			
				if(j>=n)
				{
					if(t!=0)
						printf("%d",t);
					t--;
				}
			}
			else
			printf(" ");
		}
		printf("\n");

	}
	return 0;
}
