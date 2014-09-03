#include<stdio.h>
int main()
{
	long long int ar[12],n,k,i,num,res;
	ar[0]=1,ar[1]=1;ar[2]=2,ar[3]=6,ar[4]=24,ar[5]=120,ar[6]=720,ar[7]=5040,ar[8]=40320,ar[9]=362880,ar[10]=3628800,ar[11]=39916800,ar[12]=479001600,ar[13]=6227020800;
	while(scanf("%lld%lld",&n,&k)!=EOF)
	{
		res=1;
		for(i=0;i<k;i++)
		{
			scanf("%lld",&num);
			res=res*ar[num];
		}
		printf("%lld\n",ar[n]/res);

	}
	return 0;
}
