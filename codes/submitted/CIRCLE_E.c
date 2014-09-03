#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,num;
	double r1,r2,r3;
	double up,down,ans;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lf%lf%lf",&r1,&r2,&r3);
		up=r1*r2*r3;
		down=((r1*r2)+(r2*r3)+(r3*r1)+2*(sqrt((r1*r2*r3)*(r1+r2+r3))));
		printf("%lf\n",up/down);
	}
	return 0;
}
