#include<stdio.h>
int main()
{
	int n,i,num,m,count=0,j;
	scanf("%d",&n);
	char array[10010];

	for(i=0;i<10000;i++)
	{
		array[i]=0;
	}

	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(array[num]==2)
			count--;
		array[num]=1;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&num);
			if(array[num]==0)
			{
				array[num]=2;
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
