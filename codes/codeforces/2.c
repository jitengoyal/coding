#include<stdio.h>
int func(int a,int b);
int main()
{
	int a,b,c,d,e,f,g,h,temp;
	double ratio1,ratio2,ratio;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	ratio1 = 1.0*a/c;
	ratio2 = 1.0*b/d;
	if(ratio1<ratio2)
		ratio = ratio1;
	else ratio = ratio2;
	if(ratio==ratio1)
	{
		e = c*a;
		f = d*a;
		g = (a*b*c*c)-(e*f);
		h = c*c*a*b;
		temp = func(g,h);
		printf("%d/%d\n",g/temp,(c*c*a*b)/temp);
	}
	else
	{
		e = c*b;
		f = d*b;
		g = (a*b*d*d)-(e*f);
		h = d*d*a*b;
		temp = func(g,h);
		printf("%d/%d\n",g/temp,(d*d*a*b)/temp);
	}
	return 0;
}

int func(int a,int b)
{
	if(a%b==0)
		return b;
	func(b,a%b);
}
