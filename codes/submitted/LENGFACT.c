#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415
//#define e 2.7182818284590452353 
int main()
{
	long long int num,i,n,j,res;
	double ans;
	double e=2.7182818284590452353;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		ans=0.0;
		scanf("%lld",&n);
		if(n==0 || n==1)
			printf("1\n");
		else
		{
			ans=log10(sqrt(2*3.1415))-0.5*(log10(n+1))+(n+1)*(log10(n+1))-(n+1)*(log10(2.7182818284590452353));
			res=ans+1;
			printf("%lld\n",res);
		}
	}
	return 0;
}

