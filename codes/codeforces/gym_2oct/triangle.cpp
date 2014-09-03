#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	double x1,y1,x2,y2,x3,y3,c1,c2,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf",&x1,&y1);
		scanf("%lf%lf",&x2,&y2);
		scanf("%lf%lf",&x3,&y3);
		scanf("%lf%lf%lf",&c1,&c2,&r);
		if((r*r)-(((x1*(y2-y1))-(y1*(x2-x1)))*(((x1*(y2-y1)))-(y1*(x2-x1)))) >=0)
			printf("YES1\n");
		else if((r*r)-(((x2*(y3-y2))-(y2*(x3-x2)))*(((x2*(y3-y2)))-(y2*(x3-x2)))) >=0)
			printf("YES2\n");
		else if((r*r)-(((x3*(y1-y3))-(y3*(x1-x3)))*(((x3*(y1-y3)))-(y3*(x1-x3)))) >=0)
			printf("YES3\n");
		else
			printf("NO\n");
	}
}
