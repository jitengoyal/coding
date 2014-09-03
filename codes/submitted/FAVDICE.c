#include<stdio.h>
int main()
{
	int num,i;
	float ans,n,j;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		ans=1;
		scanf("%f",&n);
		for(j=n-1;j>0;j--)
		{
			ans+=n/j;
		}
		printf("%.2f\n",ans);
	}
	return 0;
}
