#include<stdio.h>
int main()
{
	int i,num,n,j,k,x_count,o_count,x_win,o_win,x_temp,o_temp;
	char a,arr[3][3];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
				scanf("%c",&arr[j][k]);
			scanf("%c",&a);
		}
		if(i!=n-1)
			scanf("\n");

		
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%c",arr[j][k]);
			}
			printf("\n");
		}	
		printf("\n");
	}
	return 0;
}
