#include<stdio.h>
#include<math.h>
int main()
{
	double x0=0,x1,f0,df0,d;
	double eps=0.000001;
	scanf("%lf",&d);
	scanf("%lf",&x0);
	while(1)
	{
		x1=0;
		f0=x0*x0-d;
		df0=2*x0;
		x1=x0-(f0/df0);
		if (fabs(x1-x0)<eps)
		{
			printf("%lf\n",x1);
			break;
		}
		else
			x0=x1;
	}
	return 0;
}




