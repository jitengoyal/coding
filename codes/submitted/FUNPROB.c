#include <stdio.h>
int main() 
{
	int m, n;
	double mm, nn;
	scanf("%d%d",&n,&m);
	while(1) 
	{
		if(m==0 &&n==0)
			break;
		if(n==0) 
			printf("1.000000\n");
		else if(n>m) 
			printf("0.000000\n");
		else {
			mm = m; nn = n;
			printf("%lf\n", (mm-nn+1.0) / (mm+1.0));
		}
		scanf("%d%d",&n,&m);
	}
	return 0;
}
