#include<stdio.h>
#include<math.h>
#include<iostream>
#define two 1.4142135623730951
using namespace std;
int main()
{
	int t,r;
	double ans;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{	
		scanf("%d",&r);
		printf("%lf\n",r*two);
	}
	return 0;
}
