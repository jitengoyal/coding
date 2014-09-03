#include<stdio.h>
int main()
{
	int i,j,n,t=0;
	scanf("%d",&n);
	for(i=0;i<(2*n-1);i++)
	{
		for(j=0;j<(2*n-1);j++)
		{
				if(n%2==0)
				{
					if((i==0)||(i==2*n-2))
					{
						if(j==n-1)
							printf("*");
						else
							printf(" ");
					}
					else
					{
						if(i<=n)
						{
							if((((i+j)%2)!=0)&&(i+j>=n-1)&&(i+j<=n-1+(2*i)))
									printf("*");
							else
								printf(" ");
						}
						else
						{
							if((((i+j)%2)!=0)&&(i-j<=n-1)&&(i+j<=-3+(3*n)))
									printf("*");
							else
								printf(" ");

						}
					}
				}
			else
			{
				if((i==0)||(i==2*n-2))
				{
					if(j==n-1)
						printf("*");
					else
						printf(" ");
				}
				else
				{
						if(i<=n)
						{
							if((((i+j)%2)==0)&&(i+j>=n-1)&&(i+j<=n-1+(2*i)))
									printf("*");
							else
								printf(" ");
						}
						else
						{
							if((((i+j)%2)==0)&&(i-j<=n-1)&&(i+j<=-3+(3*n)))
									printf("*");
							else
								printf(" ");
						}
				}
			}
		}
		printf("\n");
	}
	return 0;
}
