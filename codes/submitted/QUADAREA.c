#include<stdio.h>
#include<math.h>
int main()
{
	int i,num;
	double a,b,c,d,s,res;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=((a+b+c+d)/2.00);
		res=fabs((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n",sqrt(res));
	}
	return 0;
}
