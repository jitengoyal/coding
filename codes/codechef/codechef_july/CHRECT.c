#include<stdio.h>
int main()
{
	int num,i,row,col,k;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d%d%d",&row,&col,&k);
		if(row==1 && col==1)
			printf("%d\n",0);
		else if(row==1 && col==2)
			printf("%d\n",0);
		else if(row==2 && col==1)
			printf("%d\n",0);
		else if(row==1 && col>2)
			printf("%d\n",k);
		else if(col==1 && row>2)
			printf("%d\n",k);
		else
		{
			if(k%2==0)
				printf("%d\n",k/2);
			else
				printf("%d\n",k/2+1);

		}
	}
	return 0;
}
