#include<stdio.h>
int main()
{
	double a,b,c,d,up,down;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	up=a*d;
	down=(b*c)+(a*d)-(a*c);
	printf("%.12lf\n",up/down);
	return 0;
}
