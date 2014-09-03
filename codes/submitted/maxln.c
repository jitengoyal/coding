#include<stdio.h>
int main()
{
	int i,num;
	long long int r;
	double ans;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&r);
		ans=(1.00/4.00)+(r*r)*4.00;
		printf("Case %d: %.2lf\n",i+1,ans);
	}
	return 0;
}

