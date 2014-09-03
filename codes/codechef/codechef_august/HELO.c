#include<stdio.h>
int main()
{
	int test,U,N,j,ans,i,M,C;
	float D,R,temp;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		int ans=0;
		scanf("%f%d%d",&D,&U,&N);
		float start=((U*(1.0))*D);
//		printf("%f\n",start);
		for(j=0;j<N;j++)
		{
			scanf("%d%f%d",&M,&R,&C);
			temp=(C*(1.0)/M)+((U*(1.0))*R);

			if(temp<start)
			{
				ans=j+1;
				start=temp;
			}
		}
//		printf("%f\n",temp);
		printf("%d\n",ans);
	}
	return 0;
}
